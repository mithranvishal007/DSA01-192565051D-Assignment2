# Q1 – Call by Value, Reference and Pointer

Value changes only a local copy; reference aliases the caller's variable; pointer stores the caller's address and changes it through dereferencing. Use `const T&` for large read-only objects to avoid copying.

**Prediction for the supplied program (before execution):**
```text
1 12 13
1 100
16 13 6
```
`a` stays 1 because it is passed by value. `b` becomes 12 through reference and `c` becomes 13 through pointer. `bigger(a,c)` returns a reference to c, so assigning 100 changes c. `show(1)` uses y=5,z=10; `show(1,2)` uses z=10; the third call supplies all values.

**Completed-code output:**
```text
after call by value : 45000
after call by reference: 40500
```
Returning a new fee is an alternative: `long long applyConcession(long long fee, int percent) { return fee - fee * percent / 100; }`. Caller must assign the return value. All three methods are O(1) time/O(1) auxiliary space. Copying a large Student object by value costs O(object size); references avoid the copy.
