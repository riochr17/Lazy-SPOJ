# PERFSQNUM - Yet Another Perfect Square Equation

[https://www.spoj.com/problems/PERFSQNUM/](https://www.spoj.com/problems/PERFSQNUM/)

## Solution

Square number consist of sum of odds numbers, such as:
```
1 = 1
4 = 1 + 3
9 = 1 + 3 + 5
and so on
```

`x^2 + n` will satify perfect square number only if `n` can be break into sum of odds and follows the next sequence of the odd's sum of `x^2`, let see example below:

```
x^2 + 45
<sum of odds number> + 45

possibilities:
<sum of odds number> + 5 + 7 + 9 + 11 + 13 ... (1)
<sum of odds number> + 13 + 15 + 17 .......... (2)
<sum of odds number> + 45 .................... (3)
``` 

on `(1)` sum sequence of `x^2` 
```
x^2 = 1 + 3 = 4 = 2^2
``` 

on `(2)` sum sequence of `x^2` 
```
x^2 = 1 + 3 + ... + 9 + 11 = 36 = 6^2
``` 

on `(3)` sum sequence of `x^2` 
```
x^2 = 1 + 3 + ... + 41 + 43 = 484 = 22^2
```

now i have sub-problem to find all the next squence of odds number that satify `n`.

# Issue

Python code works as well, but C code has some problem and always return wrong answer on SPOJ judge. The C code problem should be on output printing, since it doesn't give correct output as i tried on online compiler ideone.com
