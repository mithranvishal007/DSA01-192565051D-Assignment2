# Q4 – Class with an Array Inside It

`SavingsAccount` keeps account number, balance, ten transaction values and count private. `deposit()`, `withdraw()` and `miniStatement()` are public; `record()` is private. Member functions are defined outside the class using `SavingsAccount::`.

When the 11th transaction arrives, the program shifts entries left, discards the oldest, and appends the new transaction. Shifting costs O(k) per insertion when full. For fixed k=10 this is bounded. A circular buffer uses a start index and overwrites the oldest entry, giving O(1) insertion and O(k) storage; listing the history is O(k). A deque can also efficiently push_back/pop_front but has dynamic allocation overhead.
