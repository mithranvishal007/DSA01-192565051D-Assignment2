# Q3 – Default Arguments and Function Overloading

The original overloads overlap: a one-argument call can match a one-parameter overload and an overload with default arguments, producing ambiguity. The redesigned interface uses `charge(int grams)`, `charge(double kg, bool express=false, bool insured=false)`, and `charge(const Parcel&)`.

**Six predictions and observed selections:**
- `charge(2)`: int overload, exact match.
- `charge(2.0f)`: double overload; float-to-double promotion beats float-to-int conversion.
- `charge(2.0)`: double overload, exact match.
- `charge(500)`: int overload.
- `charge(parcel)`: Parcel overload.
- `charge(2.0,true,true)`: double overload.

Example rates are illustrative only (50 per kg, 30 express, 20 insurance); the assignment does not prescribe prices. Exact match beats promotion, and promotion beats standard conversion. Defaults are trailing because only rightmost arguments can be omitted. Overload selection occurs at compile time; charge calculation is O(1).
