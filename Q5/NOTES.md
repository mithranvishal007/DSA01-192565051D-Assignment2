# Q5 – Static Members and Arrays of Objects

`issued` is static because it belongs to the class, not an individual ticket. It is defined once outside the class. `count()` is static and has no `this` pointer, so it cannot directly access per-object `seat` or `name`.

**Complete-code expected output:**
```text
Asha: Seat 1
Bala: Seat 2
Chitra: Seat 3
Dev: Waiting
Issued: 3
```
**Prediction for Token program:**
```text
101 103 104 4
```
`next` starts at 100. Three array objects and one extra object call the constructor, incrementing next to 104. `issued()` returns 104-100.

Static state persists across function calls. A second call continues from the current count. For independent buses, a separate TicketOffice object is preferable. Construction/count is O(1) per object; an array of n ticket objects uses O(n) storage. A global counter has weaker encapsulation; a TicketOffice supports multiple independent buses.
