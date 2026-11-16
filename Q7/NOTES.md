# Q7 – Diagnose, Redesign and Validate

**A. Diagnose:** Q4's shift-based history moves k-1 stored elements on each insertion after it becomes full, requiring O(k) work.

**B. Objective:** Preserve the most recent ten transactions in oldest-to-newest order and reduce insertion from O(k) to O(1).

**C. Redesign:** A circular buffer uses `start` and `count`. While not full, append at `(start+count)%K`. When full, overwrite `values[start]` and advance `start=(start+1)%K`. It is a direct implementation, not a replacement with a library container.

**D. Prediction:** Both designs should retain values 199991 through 200000 after 200000 insertions. A full-buffer circular insertion uses a constant number of writes; shifting moves up to nine values for K=10.

**E. Validation:** Both programs insert the same 200000 values and print the last ten. Compare their measured insertion times; timing varies by system.

**F. Evaluation:** Circular buffer insertion is O(1), with O(k) storage, but indexing logic is more complex. Shifting is simpler and may be preferable for small histories or infrequent insertions.

## Measurements from this execution

```text
Original shift design
Transactions inserted: 200000
Insertion time (microseconds): 2262
Last transactions: 199991 199992 199993 199994 199995 199996 199997 199998 199999 200000

Redesigned circular-buffer design
Transactions inserted: 200000
Insertion time (microseconds): 840
Last transactions: 199991 199992 199993 199994 199995 199996 199997 199998 199999 200000
```
Both implementations produced identical final ten values. Timing is environment-dependent.
