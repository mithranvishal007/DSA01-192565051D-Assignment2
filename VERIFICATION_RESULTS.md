Compiler: g++ (Debian 14.2.0-19) 14.2.0
Standard: C++17
Common flags: -std=c++17 -Wall -Wextra -pedantic

## Q1/q1_call_methods.cpp
Compile return code: 0
Program output:
After call by value: 45000
After call by reference: 40500
After call by pointer: 40500

## Q1/q1_prediction.cpp
Compile return code: 0
Program output:
1 12 13
1 100
16 13 6

## Q1/q1_complete_code.cpp
Compile return code: 0
Program output:
after call by value : 45000
after call by reference: 40500

## Q2/q2_return_reference.cpp
Compile return code: 0
Compiler diagnostics:
/mnt/data/DSA01-192565051D-Assignment2/Q2/q2_return_reference.cpp: In function ‘int& danglingReference()’:
/mnt/data/DSA01-192565051D-Assignment2/Q2/q2_return_reference.cpp:15:12: warning: reference to local variable ‘local’ returned [-Wreturn-local-addr]
   15 |     return local;
      |            ^~~~~
/mnt/data/DSA01-192565051D-Assignment2/Q2/q2_return_reference.cpp:14:9: note: declared here
   14 |     int local = 42;
      |         ^~~~~
Program output:
Highest before moderation: 91
Highest after moderation: 93
Read-only reference: 93
Returned copy: 93

## Q3/q3_overloading.cpp
Compile return code: 0
Program output:
charge(2) [int grams] = 0.10
charge(2.0f) [float promotes to double] = 100.00
charge(2.0) [double kilograms] = 100.00
charge(500) [int grams] = 25.00
charge(parcel) [Parcel overload] = 175.00
charge(2.0, true, true) [double overload] = 150.00

## Q4/q4_savings_account.cpp
Compile return code: 0
Program output:
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

## Q5/q5_bus_tickets.cpp
Compile return code: 0
Program output:
Asha: Seat 1
Bala: Seat 2
Chitra: Seat 3
Dev: Waiting
Issued: 3
Esha: Waiting
Farhan: Waiting
Cumulative issued: 3

## Q5/q5_prediction.cpp
Compile return code: 0
Program output:
101 103 104 4

## Q6/q6_friend_inline.cpp
Compile return code: 0
Program output:
205 false
20 true
0 false

## Q6/q6_inline_benchmark.cpp
Compile return code: 0
Program output:
Iterations per measurement: 10000000
Inline function (microseconds): 28733
Regular function (microseconds): 27388
Sink: 2050000000

## Q6/q6_inline_benchmark.cpp
Compile return code: 0
Program output:
Iterations per measurement: 10000000
Inline function (microseconds): 13892
Regular function (microseconds): 22171
Sink: 2050000000

## Q7/q7_original_shift.cpp
Compile return code: 0
Program output:
Original shift design
Transactions inserted: 200000
Insertion time (microseconds): 2262
Last transactions: 199991 199992 199993 199994 199995 199996 199997 199998 199999 200000

## Q7/q7_redesigned_circular.cpp
Compile return code: 0
Program output:
Redesigned circular-buffer design
Transactions inserted: 200000
Insertion time (microseconds): 840
Last transactions: 199991 199992 199993 199994 199995 199996 199997 199998 199999 200000
