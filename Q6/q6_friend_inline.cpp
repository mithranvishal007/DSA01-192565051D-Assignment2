#include <iostream>
#include <cstdlib>

class Time {
    int h, m;

public:
    Time(int hh, int mm) : h(hh), m(mm) {}
    friend inline int minutesBetween(const Time& a, const Time& b);
    friend inline bool earlier(const Time& a, const Time& b);
};

inline int minutesBetween(const Time& a, const Time& b) {
    int first = a.h * 60 + a.m;
    int second = b.h * 60 + b.m;
    return std::abs(first - second);
}

inline bool earlier(const Time& a, const Time& b) {
    return (a.h * 60 + a.m) < (b.h * 60 + b.m);
}

int main() {
    Time departure(9, 45), arrival(13, 10);
    std::cout << minutesBetween(departure, arrival) << ' '
              << std::boolalpha << earlier(arrival, departure) << '\n';

    Time beforeNoon(11, 50), afterNoon(12, 10);
    std::cout << minutesBetween(beforeNoon, afterNoon) << ' '
              << earlier(beforeNoon, afterNoon) << '\n';

    Time sameA(8, 30), sameB(8, 30);
    std::cout << minutesBetween(sameA, sameB) << ' '
              << earlier(sameA, sameB) << '\n';
}
