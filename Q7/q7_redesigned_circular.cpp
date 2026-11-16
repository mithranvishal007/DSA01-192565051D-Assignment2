#include <iostream>
#include <chrono>
#include <vector>

class CircularHistory {
    static const int K = 10;
    int values[K]{};
    int start = 0;
    int count = 0;
public:
    void add(int value) {
        if (count < K) {
            values[(start + count) % K] = value;
            ++count;
        } else {
            values[start] = value;
            start = (start + 1) % K;
        }
    }
    std::vector<int> last() const {
        std::vector<int> result;
        for (int i = 0; i < count; ++i)
            result.push_back(values[(start + i) % K]);
        return result;
    }
};

int main() {
    constexpr int N = 200000;
    CircularHistory history;
    auto start = std::chrono::steady_clock::now();
    for (int i = 1; i <= N; ++i) history.add(i);
    auto finish = std::chrono::steady_clock::now();
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count();

    std::cout << "Redesigned circular-buffer design\n";
    std::cout << "Transactions inserted: " << N << '\n';
    std::cout << "Insertion time (microseconds): " << us << '\n';
    std::cout << "Last transactions:";
    for (int value : history.last()) std::cout << ' ' << value;
    std::cout << '\n';
}
