# Ch 1 Basic Concepts

## 1.1

### Algorithm E - Euclid's Algorithm

Find the GCD of two positive integers *m* and *n*.

1. [Find remainder.] Take m / n, let r be the remainder (guaranteed 0<= r < n).
1. [Is it zero?] If r == 0, complete.  Return n.
1. [Reduce.] Set m <- n, n <- r, goto 1.

### Replacement

<- is also assignment or substitution.