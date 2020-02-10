# Ch 1 Basic Concepts

## 1.1

### Algorithm E - Euclid's Algorithm

Find the GCD of two positive integers `m` and `n`.

1. [Find remainder.] Let `r` be the remainder of diving `m / n`. (guaranteed `0 <= r < n`).
1. [Is it zero?] If `r == 0`, complete.  Return `n`.
1. [Reduce.] `m <- n`, `n <- r`, goto 1.

### Notation

`<-` is replacement, also assignment or substitution. Not `->`!

`n <- m <- r` sets all three to `r`.

`n <-> m` means exchange (swap) `n` and `m`.

Elements of an ordered array are subscripted.  I'll use `v1, v2`, etc, otherwise `v[j]`.
