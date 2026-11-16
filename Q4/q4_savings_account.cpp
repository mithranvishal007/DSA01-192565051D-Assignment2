#include <iostream>
#include <string>

class SavingsAccount {
private:
    long long accountNumber;
    double balance;
    double transactions[10];
    int count;

    void record(double amount);

public:
    SavingsAccount(long long number, double openingBalance)
        : accountNumber(number), balance(openingBalance), count(0) {}

    void deposit(double amount);
    bool withdraw(double amount);
    void miniStatement() const;
};

void SavingsAccount::record(double amount) {
    if (count < 10) {
        transactions[count++] = amount;
    } else {
        for (int i = 1; i < 10; ++i) transactions[i - 1] = transactions[i];
        transactions[9] = amount;
    }
}

void SavingsAccount::deposit(double amount) {
    if (amount <= 0) return;
    balance += amount;
    record(amount);
}

bool SavingsAccount::withdraw(double amount) {
    if (amount <= 0 || amount > balance) return false;
    balance -= amount;
    record(-amount);
    return true;
}

void SavingsAccount::miniStatement() const {
    std::cout << "Account: " << accountNumber << '\n';
    std::cout << "Balance: " << balance << '\n';
    std::cout << "Last " << count << " transactions (oldest to newest):\n";
    for (int i = 0; i < count; ++i) {
        std::cout << transactions[i] << '\n';
    }
}

int main() {
    SavingsAccount account(123456789, 1000.0);
    for (int i = 1; i <= 8; ++i) account.deposit(i * 100.0);
    account.withdraw(250.0);
    account.deposit(900.0);
    account.withdraw(100.0);
    account.deposit(1100.0); // 11th transaction: oldest is discarded
    account.miniStatement();
}
