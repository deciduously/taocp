# TAOCP

Notes from reading The Art Of Computer Programming.

[MMIXWARE](http://mmix.cs.hm.edu/bin/index.html) download, include in `$PATH`.

Run example using `--interactive`:

```
$ mmixal hello.mms
$ mmix -i hello.mmo
mmix>
           (00000000000000fc: fb0000ff (UNSAVE)) #6000000000000088: rG=254, ..., rL=2
  0 instructions, 0 mems, 0 oops; 0 good guesses, 0 bad
  (now at location #0000000000000100)
mmix>
         1. 0000000000000100: 23fffe00 (ADDUI) $255=g[255] = 2305843009213693952 = #2000000000000000
  1 instruction, 0 mems, 1 oop; 0 good guesses, 0 bad
  (now at location #0000000000000104)
mmix>
Hello world!
         1. 0000000000000104: 00000701 (TRAP) $255 = Fputs(StdOut,#2000000000000000) = 13
  2 instructions, 0 mems, 6 oops; 0 good guesses, 0 bad
  (now at location #0000000000000108)
mmix>
         1. 0000000000000108: 00000000 (TRAP) Halt(0)
  3 instructions, 0 mems, 11 oops; 0 good guesses, 0 bad
  (halted at location #0000000000000108)
mmix>
  3 instructions, 0 mems, 11 oops; 0 good guesses, 0 bad
  (halted at location #0000000000000108)
```