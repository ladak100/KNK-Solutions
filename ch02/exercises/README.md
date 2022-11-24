# Chapter 2: C Fundamentals
## Exercises

### 02.01
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
### Solution
The program compiles and runs with no errors. When running with `-std=c99`, no warnings are present. When running with `-std=c89`, the compiler produces the following warning:
```
warning: control reaches end of non-void function [-Wreturn-type]
```

### 02.02
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
> (a) Identify the directives and statements in this program.
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

### 02.03
> Condense the `dweight.c` program by (1) replacing the assignments to `height`, `length`, and `width` with initializers and (2) removing the `weight` variable, instead calculating `(volume + 165) / 166` within the last `printf`.
#### Solution
