#include <iostream>

void applyByValue(long long fee, int percent) {
    fee -= fee * percent / 100;
}

void applyByReference(long long& fee, int percent) {
    fee -= fee * percent / 100;
}

void applyByPointer(long long* fee, int percent) {
    if (fee != nullptr) {
        *fee -= *fee * percent / 100;
    }
}

int main() {
    long long byValue = 45000;
    long long byReference = 45000;
    long long byPointer = 45000;

    applyByValue(byValue, 10);
    applyByReference(byReference, 10);
    applyByPointer(&byPointer, 10);

    std::cout << "After call by value: " << byValue << '\n';
    std::cout << "After call by reference: " << byReference << '\n';
    std::cout << "After call by pointer: " << byPointer << '\n';
    return 0;
}
