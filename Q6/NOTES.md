# Q6 – Friend Functions and Inline Functions

Friend functions treat two Time objects symmetrically and can access both objects' private hour/minute members. They are called as `minutesBetween(a,b)`, unlike a member function `a.minutesTo(b)`.

**Correctness output:**
```text
205 false
20 true
0 false
```
09:45 is 585 minutes after midnight; 13:10 is 790, difference 205. 11:50 precedes 12:10 by 20 minutes. Equal times have difference zero and neither is earlier.

`inline` is not a guarantee that the compiler substitutes the body; the compiler decides. It also permits suitable definitions in multiple translation units under the One Definition Rule. The benchmark measures 10,000,000 calls at -O0 and -O2. Measurements vary by compiler and machine. All comparisons are O(1) time/O(1) auxiliary space. Member functions and getters are alternatives; use friend only when symmetric private access is justified.

## Measurements from this execution

Compiler: g++ (Debian 14.2.0-19) 14.2.0

```text
-O0
Iterations per measurement: 10000000
Inline function (microseconds): 28733
Regular function (microseconds): 27388
Sink: 2050000000

-O2
Iterations per measurement: 10000000
Inline function (microseconds): 13892
Regular function (microseconds): 22171
Sink: 2050000000
```
These are one-run measurements and are machine/compiler dependent; repeat on your own system.
