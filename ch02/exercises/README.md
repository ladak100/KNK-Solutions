# Chapter 2: C Fundamentals
## Exercises

### 02_01
> Create and run Kernighan and Ritchie's famous "hello, world" program:
> ```c
> #include <stdio.h>
>
> int main(void)
> {
> 	printf("hello, world\n");
> }
> ```
> Do you get a warning message from the compiler? If so, what's needed to make it go away?
#### Solution
The program compiles and runs with no errors. When running with `-std=c99`, no warnings are present. When running with `-std=c89`, the compiler produces the following warning:
```
warning: control reaches end of non-void function [-Wreturn-type]
```

### 02_02
> Consider the following program:
> ```c
> #include <stdio.h>
>
> int main(void)
> {
>     printf("Parkinson's Law:\nWork expands so as to ");
>     printf("fill the time\n");
>     printf("available for its completion.\n");
>     return 0;
> }
> ```
> (a) Identify the directives and statements in this program.\
> (b) What output does the program produce?
#### Solution
##### (a)
Directives:
```c
#include <stdio.h>
```
Statements:
```c
printf("Parkinson's Law:\nWork expands so as to ");
printf("fill the time\n");
printf("available for its completion.\n");
return 0;
```
##### (b)
Output:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.

```

### 02_03
> Condense the `dweight.c` program by (1) replacing the assignments to `height`, `length`, and `width` with initializers and (2) removing the `weight` variable, instead calculating `(volume + 165) / 166` within the last `printf`.
#### Solution
See [`02_03.c`](02_03.c)

### 02_04
> Write a program that declares several `int` and `float` variables--without initializing them--and then prints their values. Is there any pattern to the values? (Usually there isn't.)
#### Solution
See [`02_04.c`](02_04.c)\
Output:
```
Ints: 0 1 0
Floats: -nan 0.000000 -nan
```
There do appear to be oscillations in both `int` and `float` values.

### 02_05
> Which of the following are not legal C identifiers?\
> (a) `100_bottles`\
> (b) `_100_bottles`\
> (c) `one_hundred_bottles`\
> (d) `bottles_by_the_hundred`
#### Solution
(a) is the only illegal identifier. Identifiers in C can only begin with numbers or underscores.

### 02_06
> Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in `current___balance`, for example)?
#### Solution
Although legal, multiple adjacent underscores are difficult to count and should be avoided when naming identifiers.

### 02_07
> Which of the following are keywords in C?\
> (a) `for`\
> (b) `If`\
> (c) `main`\
> (d) `printf`\
> (e) `while`
#### Solution
(a) and (e) are keywords in C. For (b), `If` is not a keyword in C, but `if` is. Although (c) and (d) have significance, they can be used to name identifiers and are therefore not keywords.

### 02_08
> How many tokens are there in the following statement?
> ```c
> answer=(3*q-p*p)/3;
> ```
#### Solution
There are fourteen tokens, `answer`,`=`,`(`,`3`,`*`,`q`,`-`,`p`,`*`,`p`,`)`,`/`,`3`,`;`

### 02_09
> Insert spaces between the token in Exercise 8 to make the statement easier to read
#### Solution
```c
answer = (3 * q - p * p) / 3;
```

### 02_10
> In the `dweight.c` program (Section 2.4), which spaces are essential?
#### Solution
The spaces between `int main`, `int height`, `#include <stdio.h>` are essential. The rest are decorative.
