#include <iostream>
#include <chrono>
#include <vector>

class ShiftHistory {
    static const int K = 10;
    int values[K]{};
    int count = 0;
public:
    void add(int value) {
        if (count < K) values[count++] = value;
        else {
            for (int i = 1; i < K; ++i) values[i - 1] = values[i];
            values[K - 1] = value;
        }
    }
    std::vector<int> last() const {
        return std::vector<int>(values, values + count);
    }
};

int main() {
    constexpr int N = 200000;
    ShiftHistory history;
    auto start = std::chrono::steady_clock::now();
    for (int i = 1; i <= N; ++i) history.add(i);
    auto finish = std::chrono::steady_clock::now();
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count();

    std::cout << "Original shift design\n";
    std::cout << "Transactions inserted: " << N << '\n';
    std::cout << "Insertion time (microseconds): " << us << '\n';
    std::cout << "Last transactions:";
    for (int value : history.last()) std::cout << ' ' << value;
    std::cout << '\n';
}
