# Chapter 4: Expressions
## Exercises

### 04_01
> Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.
> ```
> (a) i = 5; j = 3;
>     printf("%d %d", i / j, i % j);
> (b) i = 2; j = 3;
>     printf("%d", (i + 10) % j);
> (c) i = 7; j = 8; k = 9;
>     printf("%d", (i + 10) % k / j);
> (d) i = 1; j = 2; k = 3;
>     printf("%d", (i + 5) % (j + 2) / k);
> ```
#### Solution
(a) `1 2`\
(b) `0`\
(c) `1`\
(d) `0`

### 04_02
> If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.
#### Solution
C89: The result of division given at least one operand with negative sign is *implementation-defined*, while the second expression always has the same value.\
C99: The standards states that quotients should always rounds towards zero, so both expressions always have the same value.

### 04_03
> What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)
> (a) 8 / 5\
> (b) -8 / 5\
> (c) 8 / -5\
> (d) -8 / -5
#### Solution
(a) 1\
(b) -1, -2\
(c) -1, -2\
(d) 1, 2

### 04_04
> Repeat Exercise 3 for C99.
#### Solution
(a) 1\
(b) -1\
(c) -1\
(d) 1

### 04_05
> What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)
> (a) 8 % 5
> (b) -8 % 5
> (c) 8 % -5
> (d) -8 % -5
#### Solution
(a) 3\
(b) -3, 2\
(c) 3, -2\
(d) -3, 2

### 04_06
> Repeat Exercise 5 for C99.
#### Solution
(a) 3\
(b) -3\
(c) 3\
(d) -3

### 04_07
> The algorithm for computing the UPC check digit ends with the following steps:\
> Subtract 1 from the total.\
> Compute the remainder when the adjusted total is divided by 10.\
> Subtract the remainder from 9.\
> It's tempting to try to simplify the algorithm by using these steps instead:\
> Compute the remainder when the total is divided by 10.\
> Subtract the remainder from 10.\
> Why doesn't this work?
#### Solution
Method 1: `9 - ((x-1) % 10)`\
Method 2: `10 - (x % 10)`\
The first method always yields a single-digit check digit. However, if the result of the modulus operation in Method 2 yields `0`, then the check digit will be `10`, which is not allowed.

### 04_08
> Would the `upc.c` program still work if the expression `9 - ((total - 1) % 10)` were replaced by `(10 - (total % 10)) % 10`?
#### Solution
Yes, this modification of Method 2 from the previous exercise prevents a two-digit check digit. Both yield the same results.

### 04_09
> Show the output produced by the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.
> ```
> (a) i = 7; j = 8;
>     i *= j + 1;
>     printf("%d %d", i, j);
> (b) i = j = k = 1;
>     i += j += k;
>     printf("%d %d %d", i, j, k);
> (c) i = 1; j = 2; k = 3;
>     i -= j -= k;
>     printf("%d %d %d", i, j, k);
> (d) i = 2; j = 1; k = 0;
>     i *= j *= k;
>     printf("%d %d %d", i, j, k);
> ```
#### Solution
(a) `63 8`\
(b) `3 2 1`\
(c) `2 -1 3`\
(d) `0 0 0`

### 04_10
> Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.
> ```
> (a) i = 6;
>     j = i += i;
>     printf("%d %d", i, j);
> (b) i = 5;
>     j = (i -= 2) + 1;
>     printf("%d %d", i, j);
> (c) i = 7;
>     j = 6 + (i = 2.5);
>     printf("%d %d", i, j);
> (d) i = 2; j = 8;
>     j = (i = 6) + (j = 3);
>     printf("%d %d", i, j);
> ```
#### Solution
(a) `12 12`\
(b) `3 4`\
(c) `2 8`\
(d) `6 9`

### 04_11
> Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.
> ```
> (a) i = 1;
>     printf("%d ", i++ - 1);
>     printf("%d", i);
> (b) i = 10; j = 5;
>     printf("%d ", i++ - ++j);
>     printf("%d %d", i, j);
> (c) i = 7; j = 8;
>     printf("%d ", i++ - --j);
>     printf("%d %d", i, j);
> (d) i = 3; j = 4; k = 5;
>     printf("%d ", i++ - j++ + --k);
>     printf("%d %d %d", i, j, k);
> ```
#### Solution
(a) `0 2`\
(b) `4 11 6`\
(c) `0 8 7`\
(d) `3 4 5 4`

### 04_12
> Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.
> ```
> (a) i = 5;
>     j = ++i * 3 - 2;
>     printf("%d %d", i, j);
> (b) i = 5;
>     j = 3 - 2 * i++;
>     printf("%d %d", i, j);
> (c) i = 7;
>     j = 3 * i-- + 2;
>     printf("%d %d", i, j);
> (d) i = 7;
>     j = 3 + --i * 2;
>     printf("%d %d", i, j);
> ```
#### Solution
(a) `6 16`\
(b) `6 -7`\
(c) `6 23`\
(d) `6 15`

### 04_13
> Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it? Justify your answer.
#### Solution
`++i` is exactly the same as `(i += 1)`, since both expressions return the incremented value of `i` as they are read.

### 04_14
> Supply parentheses to show how a C compiler would interpret each of the following expressions.
> ```
> (a) a * b - c * d + e
> (b) a / b % c / d
> (c) - a - b + c - + d
> (d) a * - b / c - d
> ```
#### Solution
(a) `((a * b) - (c * d)) + e`\
(b) `((a / b) % c) / d`\
(c) `(((- a) - b) + c) - (+ d)`\
(d) `((a * (- b)) / c) - d`

### 04_15
> Give the values of `i` and `j` after each of the following expression statements has been executed. (Assume that `i` has the value 1 initially and `j` has the value 2.)
> (a) `i += j;`
> (b) `i--;`
> (c) `i * j / i;`
> (d) `i % ++j;`
#### Solution
(a) `i = 3, j = 2`\
(b) `i = 0, j = 2`\
(c) `i = 1, j = 2`\
(d) `i = 1, j = 3`
