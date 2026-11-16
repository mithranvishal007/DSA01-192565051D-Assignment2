#include <iostream>
#include <chrono>
#include <cstdint>

volatile std::uint64_t sinkValue = 0;

class ClockValue {
    int h, m;
public:
    ClockValue(int hh, int mm) : h(hh), m(mm) {}
    friend inline int inlineMinutes(const ClockValue&, const ClockValue&);
    friend int regularMinutes(const ClockValue&, const ClockValue&);
};

inline int inlineMinutes(const ClockValue& a, const ClockValue& b) {
    return (b.h * 60 + b.m) - (a.h * 60 + a.m);
}

int regularMinutes(const ClockValue& a, const ClockValue& b) {
    return (b.h * 60 + b.m) - (a.h * 60 + a.m);
}

template <typename Function>
long long measure(Function function, const ClockValue& a, const ClockValue& b) {
    constexpr int iterations = 10000000;
    std::uint64_t sum = 0;
    auto start = std::chrono::steady_clock::now();
    for (int i = 0; i < iterations; ++i) {
        sum += static_cast<std::uint64_t>(function(a, b));
    }
    auto finish = std::chrono::steady_clock::now();
    sinkValue = sum;
    return std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count();
}

int main() {
    ClockValue a(9, 45), b(13, 10);
    std::cout << "Iterations per measurement: 10000000\n";
    std::cout << "Inline function (microseconds): " << measure(inlineMinutes, a, b) << '\n';
    std::cout << "Regular function (microseconds): " << measure(regularMinutes, a, b) << '\n';
    std::cout << "Sink: " << sinkValue << '\n';
}
