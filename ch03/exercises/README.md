# Chapter 3: Formatted Input/Output
## Exercises

### 03_01
> What output do the following calls of `printf` produce?\
> (a) `printf("%6d,%4d", 86, 1040);`\
> (b) `printf("%12.5e", 30.253);`\
> (c) `printf("%.4f", 83.162);`\
> (d) `printf("%-6.2g", .0000009979);`
#### Solution
See [`03_01.c`](03_01.c)\
Blankspace represented by `•`\
(a) `••••86,1040`\
(b) `•3.02530e+01`\
(c) `83.1620`\
(d) `1e-07•`

### 03_02
> Write calls of `printf` that display a `float` variable `x` in the following formats.\
> (a) Exponential notation; left-justified in a field of size 8: one digit after the decimal point.\
> (b) Exponential notation: right-justified in a field of size 10; six digits after the decimal point.\
> (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.\
> (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
#### Solution
(a) `printf("%-8.1e",x)`\
(b) `printf("%10.6e",x)`\
(c) `printf("%-8.3f",x)`\
(d) `printf("%6.0f",x)`

### 03_03
> For each of the following pairs of `scanf` format strings, indicate whether or not the two strings are equivalent. If they're not, show how they can be distinguished.
> ```
> (a) "%d"       versus " %d"
> (b) "%d-%d-%d" versus "%d -%d -%d"
> (c) "%f"       versus "%f "
> (d) "%f,%f"    versus "%f, %f"
> ```
#### Solution
(a) Equivalent\
(b) Not equivalent: the former looks for `-` _immediately_ following a decimal-formatted integer, the latter allows for any number of whitespaces before `-` (p.45)\
(c) Not equivalent: the latter will "hang" after the `float` until the user enters a nonblank character (p.46)\
(d) Equivalent

### 03_04
> Suppose that we call `scanf` as follows:
> ```c
> scanf("%d%f%d", &i, &x, &j);
> ```
> If the user enters
> ```
> 10.3 5 6
> ```
> what will be the values of `i`, `x` and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable.)
#### Solution
`i = 10`\
`x = 0.3`\
`j = 5`, the `6` is left for the next call of `scanf` to read

### 03_05
> Suppose that we call `scanf` as follows:
> ```c
> scanf("%f%d%f", &x, &i, &y);
> ```
> If the user enters
> ```
> 12.3 45.6 789
> ```
> what will be the values of `x`, `i` and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable.)
#### Solution
`x = 12.3`\
`i = 45`\
`y = 0.6`, the `789` is left for the next call of `scanf` to read

### 03_06
Show how to modify the `addfrac.c` program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each `/` character.
#### Solution
See [`03_06.c`](03_06.c)\
Add a space before each `/` in the `scanf` calls. Spaces don't need to be added anywhere else since `scanf` already allows any number of whitespaces before the numeric conversion specifiers covered so far.
