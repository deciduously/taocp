(import (rnrs))

(define gcd
    (lambda (m n)
        (if (and (>= m 0) (>= n 0))
            (cond [(= n 0) m]
            [else (gcd n (mod m n))])
            (- 1))))

(display (gcd 119 544))