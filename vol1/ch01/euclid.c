#include <stdio.h>

/**Calculate the greatest common divisor of positive integers m and n.
 * Returns -1 on error
 */
int gcd(int,int);

int main(void)
{
    int m = 119, n = 544, res;
    res = gcd(m,n);
    printf("%d", res);
}

int gcd(int divisor, int dividend)
{
    int m = divisor, n = dividend;
    // Out of bounds
    if (n <= 0 || m <= 0)
        return -1;
    for (;;)
    {
        // 1. Let `r` be the remainder of diving `m / n`.
        int r = m % n;
        // 2. If `r == 0`, complete.  Return `n`.
        if (r == 0)
            return n;
        // 3. `m <- n`, `n <- r`, goto 1.
        m = n;
        n = r;
    }
}