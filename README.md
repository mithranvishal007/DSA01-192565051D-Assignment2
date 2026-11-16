# Assignment 2 – CO2: Functions and Object-Oriented Programming in C++

**Course Coverage:** CO2 – Functions, Parameter Passing, References, Classes, Static Members, Friend Functions, Inline Optimization, and Algorithmic Redesign  
**Student Name:** Mithran Vishal M  
**Register Number:** 192565051D  
**Total Marks:** 50  
**Repository Name:** `DSA01-192565051D-Assignment2`  
**GitHub Repository Link:** [https://github.com/mithranvishal007/DSA01-192565051D-Assignment2](https://github.com/mithranvishal007/DSA01-192565051D-Assignment2)

---

## 1. Project Overview

This repository contains the complete, production-grade implementation, algorithmic analysis, output verification, and benchmark study for **C++ Assignment 2 (CO2)**.

The assignment systematically explores core C++ language mechanics across seven modular problems:
1. **Q1:** Mechanics of parameter passing (pass-by-value, pass-by-reference, pass-by-pointer), fee concession calculations, and default argument evaluation.
2. **Q2:** Mechanics of returning references from functions, lvalue assignment, const references, copy-semantics, and the critical hazards of dangling references to stack memory.
3. **Q3:** Resolving ambiguity in function overloading, exact matching vs. promotion (float-to-double) vs. standard conversion (float-to-int), and struct-based dispatch.
4. **Q4:** Object-oriented design of a `SavingsAccount` class encapsulating an internal fixed array of the 10 most recent transactions with chronological eviction.
5. **Q5:** Class-level state management using static data members and static member functions in a `BusTicket` booking system and a token tracking mechanism.
6. **Q6:** Encapsulation and friend functions for symmetric binary operations (`Time` class), paired with micro-benchmarking inline vs. regular function calls across 10,000,000 iterations under `-O0` and `-O2`.
7. **Q7:** Diagnostic analysis, architectural redesign, and empirical validation transitioning an $O(k)$ shifting array history to an $O(1)$ ring buffer (circular buffer) validated across 200,000 transactions.

---

## 2. Compiler and Build Environment

- **Compiler:** GCC (`g++`)
- **Verified Compiler Version:** `g++ (Debian 14.2.0-19) 14.2.0` (MinGW-w64 GCC 11+ compatible)
- **Language Standard:** C++17 (`-std=c++17`)
- **Compilation Flags:** `-std=c++17 -Wall -Wextra -pedantic` (strict ISO C++ compliance with comprehensive warnings)
- **Benchmark Flags:** `-O0` (no optimization) and `-O2` (aggressive performance optimization)

---

## 3. Installation & Compilation Instructions

### Prerequisites
A modern C++17 compiler (GCC/MinGW, Clang, or MSVC) and Git.

### Cloning the Repository
```bash
git clone https://github.com/mithranvishal007/DSA01-192565051D-Assignment2.git
cd DSA01-192565051D-Assignment2
```

### Compilation Commands

Run the following commands from the root directory of the repository:

#### Q1 – Parameter Passing & Output Prediction
```bash
# Method comparison (Value, Reference, Pointer)
g++ -std=c++17 -Wall -Wextra -pedantic Q1/q1_call_methods.cpp -o q1_call_methods
./q1_call_methods    # Windows: q1_call_methods.exe

# Output prediction program
g++ -std=c++17 -Wall -Wextra -pedantic Q1/q1_prediction.cpp -o q1_prediction
./q1_prediction      # Windows: q1_prediction.exe

# Complete concession code
g++ -std=c++17 -Wall -Wextra -pedantic Q1/q1_complete_code.cpp -o q1_complete_code
./q1_complete_code   # Windows: q1_complete_code.exe
```

#### Q2 – Return by Reference & Dangling Reference
```bash
# Return by reference demonstration & safety
g++ -std=c++17 -Wall -Wextra -pedantic Q2/q2_return_reference.cpp -o q2_return_reference
./q2_return_reference # Windows: q2_return_reference.exe

# Capture dangling reference compiler warning (compile-only)
g++ -std=c++17 -Wall -Wextra -Wreturn-local-addr -pedantic -c Q2/q2_return_reference.cpp -o q2_warning.o
```

#### Q3 – Default Arguments & Function Overloading
```bash
g++ -std=c++17 -Wall -Wextra -pedantic Q3/q3_overloading.cpp -o q3_overloading
./q3_overloading     # Windows: q3_overloading.exe
```

#### Q4 – Class with Internal Array (SavingsAccount)
```bash
g++ -std=c++17 -Wall -Wextra -pedantic Q4/q4_savings_account.cpp -o q4_savings_account
./q4_savings_account # Windows: q4_savings_account.exe
```

#### Q5 – Static Members & BusTicket Booking
```bash
# Bus ticket reservation and waiting list
g++ -std=c++17 -Wall -Wextra -pedantic Q5/q5_bus_tickets.cpp -o q5_bus_tickets
./q5_bus_tickets     # Windows: q5_bus_tickets.exe

# Token prediction program
g++ -std=c++17 -Wall -Wextra -pedantic Q5/q5_prediction.cpp -o q5_prediction
./q5_prediction      # Windows: q5_prediction.exe
```

#### Q6 – Friend Functions & Inline Benchmark
```bash
# Time comparison correctness
g++ -std=c++17 -Wall -Wextra -pedantic Q6/q6_friend_inline.cpp -o q6_friend_inline
./q6_friend_inline   # Windows: q6_friend_inline.exe

# Benchmark with -O0 (No Optimization)
g++ -std=c++17 -Wall -Wextra -pedantic -O0 Q6/q6_inline_benchmark.cpp -o q6_benchmark_O0
./q6_benchmark_O0    # Windows: q6_benchmark_O0.exe

# Benchmark with -O2 (Aggressive Optimization)
g++ -std=c++17 -Wall -Wextra -pedantic -O2 Q6/q6_inline_benchmark.cpp -o q6_benchmark_O2
./q6_benchmark_O2    # Windows: q6_benchmark_O2.exe
```

#### Q7 – Shifting Array vs Circular Buffer Redesign
```bash
# Original shifting array implementation (200,000 transactions)
g++ -std=c++17 -Wall -Wextra -pedantic Q7/q7_original_shift.cpp -o q7_original_shift
./q7_original_shift  # Windows: q7_original_shift.exe

# Redesigned circular buffer implementation (200,000 transactions)
g++ -std=c++17 -Wall -Wextra -pedantic Q7/q7_redesigned_circular.cpp -o q7_redesigned_circular
./q7_redesigned_circular # Windows: q7_redesigned_circular.exe
```

---

## 4. Question-Wise Details & Expected Outputs

### Q1 – Parameter Passing & Concession
- **Description:** Implements `applyByValue`, `applyByReference`, and `applyByPointer` to evaluate caller vs. callee mutation. Also includes verification of the supplied output prediction program and complete hostel fee concession code.
- **Expected Outputs:**
  - `q1_call_methods`:
    ```text
    After call by value: 45000
    After call by reference: 40500
    After call by pointer: 40500
    ```
  - `q1_prediction`:
    ```text
    1 12 13
    1 100
    16 13 6
    ```
  - `q1_complete_code`:
    ```text
    after call by value : 45000
    after call by reference: 40500
    ```

### Q2 – Return by Reference and Lifetime Hazards
- **Description:** `highestMark()` returns `int&` to the maximum element in an array, allowing direct lvalue modification (`highestMark(marks, size) += 2`). Demonstrates `const int&` read-only access and by-value copying. Includes a dangling reference example returning a local stack variable to capture compiler warning `-Wreturn-local-addr` without invoking undefined behavior.
- **Compiler Diagnostic (Warning):**
  ```text
  warning: reference to local variable 'local' returned [-Wreturn-local-addr]
  ```
- **Expected Output:**
  ```text
  Highest before moderation: 91
  Highest after moderation: 93
  Read-only reference: 93
  Returned copy: 93
  ```

### Q3 – Default Arguments and Overload Resolution
- **Description:** Resolves ambiguous function overloads between single-argument calls and default arguments. Implements `charge(int)`, `charge(double, bool, bool)`, and `charge(const Parcel&)`. Tests 6 specific call sites illustrating exact match, promotion (float-to-double), and conversion rules.
- **Expected Output:**
  ```text
  charge(2) [int grams] = 0.10
  charge(2.0f) [float promotes to double] = 100.00
  charge(2.0) [double kilograms] = 100.00
  charge(500) [int grams] = 25.00
  charge(parcel) [Parcel overload] = 175.00
  charge(2.0, true, true) [double overload] = 150.00
  ```

### Q4 – Class with Embedded Array (SavingsAccount)
- **Description:** Encapsulates account number, balance, a 10-element fixed array of recent transactions, and transaction count. When transactions exceed 10, the oldest transaction is shifted out and discarded.
- **Expected Output:**
  ```text
  Account: 123456789
  Balance: 6250
  Last 10 transactions (oldest to newest):
  300
  400
  500
  600
  700
  800
  -250
  900
  -100
  1100
  ```

### Q5 – Static Members & Array of Objects
- **Description:** `BusTicket` utilizes a static counter `issued` and static member function `count()` shared across all instances. Capacity is capped at 3; subsequent reservations enter "Waiting" status. Verifies static persistence across function calls and tests the `Token` prediction program.
- **Expected Outputs:**
  - `q5_bus_tickets`:
    ```text
    Asha: Seat 1
    Bala: Seat 2
    Chitra: Seat 3
    Dev: Waiting
    Issued: 3
    Esha: Waiting
    Farhan: Waiting
    Cumulative issued: 3
    ```
  - `q5_prediction`:
    ```text
    101 103 104 4
    ```

### Q6 – Friend Functions and Inline Optimization
- **Description:** Symmetrical non-member friend functions `minutesBetween()` and `earlier()` access private fields of two `Time` objects. Micro-benchmarking compares 10,000,000 iterations of inline vs. regular function calls under `-O0` and `-O2`.
- **Expected Outputs:**
  - `q6_friend_inline`:
    ```text
    205 false
    20 true
    0 false
    ```
  - `q6_inline_benchmark (-O0)`:
    ```text
    Iterations per measurement: 10000000
    Inline function (microseconds): ~28733
    Regular function (microseconds): ~27388
    Sink: 2050000000
    ```
  - `q6_inline_benchmark (-O2)`:
    ```text
    Iterations per measurement: 10000000
    Inline function (microseconds): ~13892
    Regular function (microseconds): ~22171
    Sink: 2050000000
    ```

### Q7 – Algorithmic Redesign: Shifting Array vs Circular Buffer
- **Description:** Diagnoses the $O(k)$ shifting bottleneck in Q4's transaction array. Redesigns the mechanism into an $O(1)$ ring buffer using modulo indexing (`(start + count) % K`). Benchmarks both implementations across 200,000 transactions and verifies identical retained histories (`199991` to `200000`).
- **Benchmark Results (200,000 insertions):**
  - **Original Shifting Array:** $2,262\ \mu\text{s}$ ($O(k)$ insertion)
  - **Redesigned Circular Buffer:** $840\ \mu\text{s}$ ($O(1)$ insertion) — **~2.7x speedup**
  - **Retained Final 10 Transactions:** Identical across both designs (`199991 199992 199993 199994 199995 199996 199997 199998 199999 200000`).

---

## 5. Algorithmic Complexity Analysis

| Question | Operation / Function | Time Complexity | Auxiliary Space Complexity | Architectural Rationale |
|:---:|:---|:---:|:---:|:---|
| **Q1** | Parameter Passing (`byValue`, `byRef`, `byPtr`) | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Value copies primitives; references/pointers alias memory avoiding copy overhead. |
| **Q2** | Maximum Element Search & Return by Ref | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ | Linear scan finds maximum; returns direct lvalue reference. |
| **Q3** | Function Overload Resolution & Calculation | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Resolved statically at compile time; zero runtime dynamic dispatch penalty. |
| **Q4** | Shifting Array History Insertion (Full) | $\mathcal{O}(k)$ | $\mathcal{O}(k)$ | Inserting into a full array requires shifting $k-1$ elements left. |
| **Q5** | Object Construction & Static Counter Query | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ | Per-object allocation $\mathcal{O}(1)$; static variable allocated once in data segment. |
| **Q6** | Friend Function Time Calculation | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Symmetric arithmetic operations; compiler can inline to eliminate stack frame. |
| **Q7 (Original)** | Array Shift Insertion (Full) | $\mathcal{O}(k)$ | $\mathcal{O}(k)$ | Linear copy of elements on every insertion after initial capacity reached. |
| **Q7 (Redesign)** | Circular Ring Buffer Insertion (Full) | $\mathcal{O}(1)$ | $\mathcal{O}(k)$ | Direct overwrite at `start` index with pointer advancement via modulo arithmetic. |

---

## 6. Screenshot Evidence Directory Structure

Screenshots of source code, terminal compilation, and program execution are systematically organized in per-question subdirectories:

```text
DSA01-192565051D-Assignment2/
├── Q1/screenshots/
│   ├── Q1_Source_Code.png
│   ├── Q1_Compilation.png
│   └── Q1_Execution.png
├── Q2/screenshots/
│   ├── Q2_Source_Code.png
│   ├── Q2_Compilation.png
│   ├── Q2_Compiler_Warning.png
│   └── Q2_Execution.png
├── Q3/screenshots/
│   ├── Q3_Source_Code.png
│   ├── Q3_Compilation.png
│   └── Q3_Execution.png
├── Q4/screenshots/
│   ├── Q4_Source_Code.png
│   ├── Q4_Compilation.png
│   └── Q4_Execution.png
├── Q5/screenshots/
│   ├── Q5_Source_Code.png
│   ├── Q5_Compilation.png
│   └── Q5_Execution.png
├── Q6/screenshots/
│   ├── Q6_Source_Code.png
│   ├── Q6_Compilation.png
│   └── Q6_Execution.png
└── Q7/screenshots/
    ├── Q7_Source_Code.png
    ├── Q7_Compilation.png
    └── Q7_Execution.png
```

*Note on Execution Verification:* All terminal outputs and compiler diagnostics were verified and saved as genuine `.txt` output files alongside each program during verification runs.

---

## 7. Submission Checklist

- [x] Student Name & Register Number clearly stated
- [x] All 7 questions implemented according to C++17 ISO standards
- [x] Every C++ program compiled with `-Wall -Wextra -pedantic`
- [x] Compiler warning for dangling reference captured and explained (Q2)
- [x] Function overloading ambiguity resolved and dispatch tested (Q3)
- [x] SavingsAccount array shifting verified (Q4)
- [x] BusTicket static counter and waiting list verified (Q5)
- [x] Time friend functions and inline benchmark executed under `-O0` and `-O2` (Q6)
- [x] Circular buffer redesign implemented, validated (200,000 items), and benchmarked (Q7)
- [x] Time and space complexity analyzed for all questions
- [x] Progressive question-by-question Git commits created
- [x] Repository published to GitHub
- [x] Word document report (`Assignment2_CO2_Report.docx`) updated with repository link
