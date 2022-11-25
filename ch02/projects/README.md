# Chapter 2: C Fundamentals
## Projects

### 02_01
> Write a program that uses `printf` to display the following picture on the screen:\
> &emsp;&ensp;&nbsp;.\
> &emsp;&ensp;.\
> &emsp;&nbsp;.\
> .&ensp;&nbsp;.\
> &nbsp;.&nbsp;.\
> &ensp;.
#### Solution
See [02_01.c](02_01.c)

### 02_02
> Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr<sup>3</sup>. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as `4/3`. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r<sup>3</sup>.
#### Solution
See [02_02.c](02_02.c)\
When using `4/3` instead of `4.0f/3.0f`, the dividend and divisor are integer literals, so integer division is performed, yielding a quotient of `1`. When `4.0f/3.0f` is used, floating-point division is performed, yielding a quotient of approximately `1.333...`. As a result, the first volume is about 25% smaller than the second volume.\
Output:
```
Volume (using 4/3): 3141.60
Volume: 4188.80
```

### 02_03
> Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.
#### Solution
See [02_03.c](02_03.c)

### 02_04
> Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with a 5% tax added:
> ```
> Enter an amount: 100.00
> With tax added: $105.00
> ```
#### Solution
See [02_04.c](02_04.c)

### 02_05
> Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:\
> 3x<sup>5</sup> + 2x<sup>4</sup> - 5x<sup>3</sup> - x<sup>2</sup> + 7x - 6\
> *Hint*: C doesn't have an exponentiation operator, so you'll need to multiply x by itself repeatedly in order to compute the powers of x. (For example, `x * x * x` is `x` cubed.)
#### Solution
See [02_05.c](02_05.c)
