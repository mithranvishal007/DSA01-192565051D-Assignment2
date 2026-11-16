#include <iostream>
#include <iomanip>
#include <string>

struct Parcel {
    double weightKg;
    bool express;
    bool insured;
};

double charge(double weightKg, bool express = false, bool insured = false) {
    double total = weightKg * 50.0;
    if (express) total += 30.0;
    if (insured) total += 20.0;
    return total;
}

double charge(int weightGrams) {
    return charge(weightGrams / 1000.0, false, false);
}

double charge(const Parcel& parcel) {
    return charge(parcel.weightKg, parcel.express, parcel.insured);
}

int main() {
    std::cout << std::fixed << std::setprecision(2);

    Parcel p{2.5, true, true};

    std::cout << "charge(2) [int grams] = " << charge(2) << '\n';
    std::cout << "charge(2.0f) [float promotes to double] = " << charge(2.0f) << '\n';
    std::cout << "charge(2.0) [double kilograms] = " << charge(2.0) << '\n';
    std::cout << "charge(500) [int grams] = " << charge(500) << '\n';
    std::cout << "charge(parcel) [Parcel overload] = " << charge(p) << '\n';
    std::cout << "charge(2.0, true, true) [double overload] = "
              << charge(2.0, true, true) << '\n';
}
