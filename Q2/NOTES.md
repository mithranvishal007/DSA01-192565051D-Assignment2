# Q2 – Return by Reference and Its Dangers

`highestMark()` returns a reference to the maximum array element, so `highestMark(marks,size) += 2;` changes the array directly.

**Output:**
```text
Highest before moderation: 91
Highest after moderation: 93
Read-only reference: 93
Returned copy: 93
```
`danglingReference()` returns a reference to a local variable whose lifetime ends at function return. Using it is undefined behaviour. It is intentionally not called or dereferenced; compiler warning is recorded in `compiler_warning.txt`.

`int&` allows modification; `const int&` allows read-only access; `int` returns a copy. Vector reallocation invalidates references, pointers and iterators to its elements. An index can be reacquired after growth. Finding the maximum is O(n) time/O(1) auxiliary space whether returning reference, index or pointer.
