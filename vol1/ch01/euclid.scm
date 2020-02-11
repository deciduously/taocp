(import (rnrs))

(define (gcd m n)
    (cond [(= n 0) m]
          [else (gcd n (mod m n))]))

(display (gcd 119 544))