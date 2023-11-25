# C LANGUAGE PROGRAMME PROBLEM TO SOLVE IN LAB

<p style="text-align:center;font-size:1.2rem"><b>SET-I</b></p>


### 1. Write a program to display “hello world” in C.

> Expected Output:

    Hello World

> Source Code:

```c
#include <stdio.h>

int main(){
    printf("Hello World");
    return 0;
}
```

### 2. Write a program to add two numbers (5&7) and display its sum.

> Expected Output:

    Sum = 12

> Source Code:

```c
#include <stdio.h>

int main()
{
    int sum, num1 = 5, num2 = 7;

    sum = num1 + num2;

    printf("Sum = %d", sum);
    return 0;
}
``` 

### 3. Write a program to multiply two numbers (10&8) and display its product. 

> Expected Output:

    Product = 80

> Source Code:

```c
#include <stdio.h>

int main()
{

    int p, n1 = 10, n2 = 8;

    p = n1 * n2;

    printf("Product = %d", p);

    return 0;
}
```

### 4. Write a program to calculate area of a circle having its radius (r=5). 

> Expected Output:

    Area of the circle: 78.54
    
> Source Code:

```c
#include <stdio.h>
#define PI 3.14153

int main()
{
    float a, r = 5;

    a = PI * r * r;

    printf("Area of the circle: %.2f \n", a);
    return 0;
}
```

### 5. Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm). 

> Formula

Area of an ellipse = $π * major * minor$

> Expected Output:

    Area of an ellipse = 75.40

> Source Code:

```c
#include <stdio.h>
#define PI 3.14153

int main()
{
    float area, mi = 4, ma = 6;

    area = PI * ma * mi;

    printf("Area of an ellipse = %.2f", area);
    return 0;
}
```

### 6. Write a program to calculate simple interest for a given P=4000, T=2, R=5.5.

> Formula

**Simple Interest** = $(p * r * t) / 100$;

> Expected Output

    Simple interest: 440.00

> Source Code

```c
#include <stdio.h>

int main()
{
    float si, p = 4000, r = 5.5, t = 2;

    si = (p * r * t) / 100;

    printf("Simple interest: %.2f", si);
    return 0;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-II</b></p>

### 1. Write a program to declare two integer and one float variables then initialize them to 10, 15, and 12.6. Also print the variable values in the screen. 

> Expected Output:

    Integer = 10 Integer = 15 Float = 12.600000

> Source Code:
```c
#include <stdio.h>

int main()
{
    int n1 = 10, n2 = 15;
    float n3 = 12.6;

    printf("Integer = %d Integer = %d Float = %f", n1, n2, n3);
    return 0;
}
```

### 2. Write a C program to prompt the user to input 3 integer values and print these values in forward and reversed order.

> Test Data:

    Enter three numbers: 10 20 30

> Expected Output:

    Forward Order = 10 20 30
    Reverse Order = 30 20 10

> Source Code:
```c
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("\nForward order = %d %d %d", n1, n2, n3);
    printf("\nReverse order = %d %d %d", n3, n2, n1);
    return 0;
}
```

### 3. Write a program to calculate simple and compound interest. 

> Test Data:

    Enter p, r and t: 6000 10 2

> Expected Output:

    Simple interest: 1200.00
    Compound interest: 1260.00

> Source Code:

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float si, p, r, t, a;
    float com;

    printf("Enter p, r and t: ");
    scanf("%f%f%f", &p, &r, &t);

    si = (p * r * t) / 100;
    a = (p * pow((1 + r / 100), t));
    com = a - p;

    printf("\nSimple interest: %.2f", si);
    printf("\nCompound interest: %.2f", com);
    return 0;
}
```

### 4. Write a program to swap two variables values with and without using third variables 

> Test Data:

    Enter the value of a and b: 10 20

> Expected Output:

    Using third variable: a = 20 b = 10
    Without using third variable: a = 10 b = 20

> Source Code:

```c
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    // Using third variable
    temp = a;
    a = b;
    b = temp;

    printf("\nUsing third variable: a = %d b = %d", a, b);

    // Without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nWithout using third variable: a = %d b = %d", a, b);
    return 0;
}
```

### 5. Write a program to check odd or even number 

**(a) using modulus operator** 

> Source Code

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a numbers: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}
```

**(b) using bitwise operator**

> Source Code

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a numbers: ");
    scanf("%d", &n);

    if (n & 1 == 1)
        printf("Odd number");
    else
        printf("Even number");
    return 0;
}
```
**(c) without using bitwise and modulus operator** 

```c
#include <stdio.h>

int main(){
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    rem = num - num / 2 * 2;

    if(rem == 0)
        printf("\nEven number");
    else
        printf("\nOdd number");

    return 0;
}
```
**(d) using conditional operator.**

> Source Code

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a numbers: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Even number") : printf("Odd number");
    return 0;
}
```

### 6. Print the value of y for given x=2 & z=4 and analyze the output. 

**a. y = x++ + ++x;**

> Expected Output: 

    y = x++ + ++x
    y = 2 + 4
    y = 6

**b. y = ++x + ++x;**

> Expected Output: 

    DOUBT
    y = ++x + ++x
    y = 3 + 4
    y = 3 + 4 + 1
    y = 8

**c. y = ++x + ++x + ++x;** 

> Expected Output: 

    DOUBT
    y = ++x + ++x + ++x
    y = 3 + 4 + 5
    y = 3 + 4 + 5 + 1
    y = 13  


**d. y = x>z;**

> Expected Output: 

    y = x > z
    y = 2 > 4
    y = 0

**e. y = x>z? x:z;**

> Expected Output: 

    y = x > z ? x : z
    y = 2 > 4 ? 2 : 4
    y = 0 ? 2 : 4
    y = 4

**f. y = x&z;** 

> Expected Output: 

    y = x & z
    y = 2 & 4      // 010 & 100
    y = 0

**g. y = x>>2 + z<<1;** 

> Expected Output: 

    y = x >> 2 + z << 1
    y = 2 >> 2 + 4 << 1
    y = 2 >> 6 << 1
    y = 10 >> 6 << 1
    y = 00 >> 1
    y = 0

### 7. Write a program to print the size of char, float, double and long double data types in C

> Expected Output:

    size of 'Char' = 1 bytes
    size of 'Float' = 4 bytes
    size of 'Double' = 8 bytes
    size of 'Long Double' = 16 bytes

> Source Code:

```c
#include <stdio.h>

int main()
{
    char ch;
    float f;
    double d;
    long double ld;

    printf("\nsize of 'Char' = %d bytes", sizeof(ch));
    printf("\nsize of 'Float' = %d bytes", sizeof(f));
    printf("\nsize of 'Double' = %d bytes", sizeof(d));
    printf("\nsize of 'Long Double' = %d bytes", sizeof(ld));
    return 0;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-III</b></p>

### 1. Write a program to find the largest and smallest among three entered numbers and also display whether the identified largest/smallest number is even or odd. 

> Test Data: 

    Enter 3 numbers: 13 30 20

> Expected Output:

    Greatest number is 30 and this is Even number
    Smallest number is 13 and this is Odd number

> Source Code:

```c
#include <stdio.h>

int main()
{
    int n1, n2, n3, l, s, ch;

    printf("\nEnter 3 numbers:");
    scanf("%d %d %d", &n1, &n2, &n3);

    l = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    s = (n1 > n2) ? (n2 > n3 ? n3 : n2) : (n1 > n3 ? n3 : n1);

    ch = l % 2;

    if (ch == 0)
        printf("\nGreatest number is %d and this is Even number", l);
    else
        printf("\nGreatest number is %d and this is Odd number", l);

    ch = s % 2;
    if (ch == 0)
        printf("\nSmallest number is %d and this is Even number", s);
    else
        printf("\nSmallest number is %d and this is Odd number", s);
    return 0;
}
```

### 2. Write a program to check whether input alphabet is vowel or not using if-else and switch statement. 

> Test Data: 

    Enter a Alphabet: Z
    
> Expected Output:

    Using IF ELSE
        Alphabet is Consonant
    Using Switch Statement
        Alphabet is Consonant

> Source Code:

```c
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Alphabet:");
    scanf("%c", &ch);

    printf("\nUsing IF ELSE");
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("\n\tAlphabet is Vowel");
    else
        printf("\n\tAlphabet is Consonant");

    printf("\nUsing Switch Statement");
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n\tAlphabet is Vowel");
        break;
    default:
        printf("\n\tAlphabet is Consonant");
    }
    return 0;
}
```

### 3. Write a program to get input of two or higher digit integer number and display in reverse order. 

> Test Data: 

    Enter a number: 352

> Expected Output:

    Reverse number = 253

> Source Code:

```c
#include <stdio.h>

int main(){
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reverse number = %d", rev);

    return 0;
}
```

### 4. Write a program that asks a number and test the number whether it is multiple of 5 or not, divisible by 7 but not by eleven. 

> Test Data: 

    Enter the number: 125
    
> Expected Output:

    It's Multiple of 5.
    It's Not Divisible by 7

> Source Code:

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter Any Number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("It's Multiple of 5.\n");
    }
    else
    {
        printf("It's Not Multiple of 5\n");
    }

    if (n % 7 == 0 && n % 11 != 0)
    {
        printf("It's Divisible By 7 But Not By Eleven.\n");
    }
    else
    {
        printf("It's Not Divisible By 7.\n");
    }
    return 0;
}
```

### 5. Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by 4 and not divisible by 100 or divisible by 400.) 

> Test Data: 

    Enter a year: 2024
    
> Expected Output:

    2024 is leap year

> Source Code:

```c
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("\n%d is Leap Year.", year);
    else
        printf("\n%d is Not a Leap Year.", year);

    return 0;
}
```

### 6. Write a program to read the values of coefficients a, b and c of a quadratic equation ax2+bx+c=0 and find roots of the equation. 

> Test Data: 

    Enter the coefficients a, b and c: 1 14 45
    
> Expected Output:

    The roots of the equation are = -5.00 -9.00

> Source Code:

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float r1, r2;
    printf("\nEnter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the equation are = %f %f", r1, r2);
    }
    else
    {
        if (d == 0)
        {
            r1 = -b / (2 * a);
            r2 = -b / (2 * a);
            printf("The roots of the equation are equal having the value = %f %f", r1, r2);
        }
        else
        {
            printf("\nRoot is Imaginary");
        }
    }
    return 0;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-IV</b></p>

### 1. Write a program to input two integer numbers and display the sum of even numbers between these two input numbers. 

> Test Data:

    Enter starting point: 2
    Enter ending point: 8
    
> Expected Output:

    Sum of Even numbers lies between 2 and 8 is 20

> Source Code:

```c
#include <stdio.h>

int main()
{
    int start, end, evenSum = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &start);

    printf("Enter Ending Point: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
    }

    printf("Sum of Even Numbers Lies Between %d and %d is: %d", start, end, evenSum);
    return 0;
}
```

### 2. Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers. 

> Test Data:

    Enter two numbers: 22 55
    
> Expected Output:

    GCD = 11
    LCM = 110

> Source Code:

```c
#include <stdio.h>

int main()
{
    int num1, num2, sm, gcd, lcm;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sm = num1;

    if (num1 > num2)
        sm = num2;

    while (sm != 0)
    {
        if (num1 % sm == 0 && num2 % sm == 0)
        {
            gcd = sm;
            break;
        }
        sm--;
    }

    lcm = num1 * num2 / gcd;

    printf("\nGCD = %d", gcd);
    printf("\nLCM = %d", lcm);

    return 0;
}
```

### 3. Write a program to display Fibonacci series of last term up to 300. 

> Expected Output:

    Fibonacci Series: 1 1 2 3 5 8 13 21 34 55 89 144 233 377
    
> Source Code:

```c
#include <stdio.h>

int main()
{
    int n = 1, sl, l = 0, i;

    for (i = 0; n <= 300; i++)
    {
        if (i < 1)
            printf("%d ", n);
        else
        {

            sl = l;
            l = n;
            n = l + sl;
            printf("%d ", n);
        }
    }
    return 0;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-V</b></p>

### 1. Write a program to add, subtract, multiply and divide two integers using user defined type function with return type. 

> Test Data:

    Enter two numbers: 5 10

> Expected Output:

    Sum = 15 Subtraction = -5 Multiplication = 50 Division = 0

> Source Code:  

```c
#include <stdio.h>

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);

int main()
{
    int x, y, sum, sub, div, mul;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum = addition(x, y);
    sub = subtraction(x, y);
    mul = multiplication(x, y);
    div = division(x, y);

    printf("Sum = %d Subtraction = %d Multiplication = %d Division = %d", sum, sub, mul, div);

    return 0;
}

int addition(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}
```

### 2. Write a program to calculate sum of first 50 natural numbers using recursive function. 

> Test Data:

    Enter the value of n: 50

> Expected Output:

    Sum of 1st 50 natural number = 1275

> Source Code:

```c
#include <stdio.h>

int main()
{
    int sum(int);
    int sp, ep, s;

    printf("Enter Ending point: ");
    scanf("%d", &ep);

    s = sum(ep);

    printf("Sum of 1st %d natural number = %d", ep, s);
    return 0;
}

int sum(int ep)
{
    if (ep == 1)
        return 1;
    return ep + sum(ep - 1);
}
```

### 3. Define a function named fact() to calculate factorial of a number n and then write a program that uses this function fact() to calculate combination and permutation. 

> Test Data:

    Enter 'p' Permutation 'c' Combination: p
    Enter the value of n and r: 5 4

> Expected Output:

    Total number of ways using Permutation = 120

> Source Code:

```c
#include <stdio.h>

int fact(int);

int main()
{
    int n, r, p, c;
    char ch;

    printf("Enter the value of n and r: ");
    scanf("%d%d", &n, &r);

    fflush(stdin);

    printf("Enter 'p' Permutation 'c' Combination: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'p':
        p = fact(n) / fact(n - r);
        printf("\nTotal Number of ways using Permutation = %d", p);
        break;
    case 'c':
        c = fact(n) / (fact(r) * fact(n - r));
        printf("\nTotal Number of ways using Combination = %d", c);
        break;
    default:
        printf("Wrong input");
    }

    return 0;
}

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
```

### 4. Write a recursive function to generate Fibonacci series. 

> Test Data:

    Enter the value of n: 15

> Expected Output:

    Fibonacci Series: 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

> Source Code:

```c
#include <stdio.h>

int main()
{
    int fib(int);
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nFibonacci Series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
```

### 5. Write a program that illustrates use of local, global and static variables 

> Expected Output:

    Example of static variable: 1 2

> Source Code:

```c
#include <stdio.h>

int a = 5, b = 5; // Global Variable

int main()
{
    int sum();
    int fun();
    int glo();

    printf("\nSum of Global Variable = %d", glo());
    printf("\nSum of Local Variable = %d", sum());
    printf("\nExample of static variable: ");
    printf("%d ", fun());
    printf("%d ", fun());

    return 0;
}

int sum()
{
    int x = 5, y = 10; // Local Variable
    return x + y;
}

int fun()
{
    static int count = 0; // Static Variable
    count++;
    return count;
}

int glo()
{
    return a + b;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-VI</b></p>

### 1. Write a program to enter 10 floating numbers in an array and display it. 

> Expected Output:

    Floating Array: 10.00 20.00 30.00 40.00 50.00 60.00 70.00 80.00 90.00 100.00

> Source Code:

```c
#include <stdio.h>

int main()
{
    float arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    printf("\nFloating Array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", arr[i]);
    }
    return 0;
}
```

### 2. Write a program to display largest and smallest element of an array defined in Q.No. 1. 

> Expected Output:

    Largest element = 100.00 Smallest element = 10.00

> Source Code:

```c
#include <stdio.h>

int main()
{
    float max = 0, min;
    int i;
    float arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int length = 10;

    min = arr[0];

    for (i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("\nLargest element = %.2f Smallest element = %.2f", max, min);
    return 0;
}
```

### 3. Write a program to initialize one dimensional array of size 8 and display the sum and average of array elements 

> Expected Output:

    Sum = 360.00 and Average = 45.00
    
> Source Code:

```c
#include <stdio.h>

int main()
{
    float sum = 0, average;
    int i;
    float arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int length = 10;

    for (i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    average = sum / 8;

    printf("\nSum = %.2f and Average = %.2f", sum, average);
    return 0;
}
```

### 4. Write a program to read two matrices of order 3 * 2, add them and display the resultant matrix in matrix form. 

> Test Data:

> Expected Output:

> Source Code:

```c

```

### 5. Write a program to multiply two 3*3 matrix. 

> Test Data:

> Expected Output:

> Source Code:

```c

```

### 6. Write a program to read a string and check for palindrome without using string related function (a string is palindrome if its half is mirror by itself eg: abcdcba). 

> Test Data:

    Enter a String: abcdcba
    
> Expected Output:

    Palindrome String

> Source Code:

```c
#include <stdio.h>

int main()
{
    int checkPalindrome(char *, int);
    int i, l = 0;
    char str[30];

    printf("Enter a String: ");
    scanf("%s", str);

    for (i = 0; str[i]; i++)
    {
        l++;
    }

    if (checkPalindrome(str, l))
        printf("Palindrome string");
    else
        printf("Not palindrome string");
    return 0;
}

int checkPalindrome(char *str, int l)
{
    int i;
    for (i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - i - 1])
            return 0;
    }
    return 1;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-VII</b></p>


### 1. Write a program to find biggest among three numbers using pointer. 

> Test Data:

    Enter three number: 2 5 3
    
> Expected Output:

    Biggest number = 5

> Source Code:

```c
#include <stdio.h>

int main()
{
    int bigNum(int *, int *, int *);
    int n1, n2, n3, big;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    big = bigNum(&n1, &n2, &n3);

    printf("Biggest number = %d", big);
    return 0;
}

int bigNum(int *n1, int *n2, int *n3)
{
    int l = (*n1 > *n2) ? (*n1 > *n3 ? *n1 : *n3) : (*n2 > *n3 ? *n2 : *n3);
    return l;
}
```

### 2. Write a program to find the sum of all the elements of an array using pointers. 

> Expected Output:

    Sum = 55

> Source Code:

```c
#include <stdio.h>

int main()
{
    int sum(int *, int);
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s;
    int l;

    l = sizeof(arr) / sizeof(arr[0]);
    s = sum(arr, l);

    printf("Sum = %d", s);
    return 0;
}
int sum(int *arr, int l)
{
    int i, s = 0;
    for (i = 0; i < l; i++)
    {
        s += arr[i];
    }
    return s;
}
```

### 3. Write a program to swap value of two variables using pointer. 

> Test Data:

    Enter the value of a and b = 5 10
    
> Expected Output:

    a = 10 b = 5

> Source Code:

```c
#include <stdio.h>

int main()
{
    void swap(int *, int *);
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    swap(&a, &b);
    
    printf("a = %d b = %d", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

### 4. Write a program to read a sentence and count the number of characters &words in that sentence. 

> Test Data:

    Enter the sentence: Keep your eyes on the stars and your feet on the ground
    
> Expected Output:

    Number of Character = 55
    Number of Word = 12

> Source Code:

```c
#include <stdio.h>

int main()
{
    int countCh(char *);
    int countW(char *);
    char str[200];
    int ch, cw;

    printf("Enter the sentence: ");
    gets(str);

    ch = countCh(str);
    cw = countW(str);

    printf("\nNumber of Character = %d", ch);
    printf("\nNumber of Word = %d", cw);
    return 0;
}

int countCh(char *str)
{
    int i, count = 0;
    for (i = 0; str[i]; i++)
    {
        count++;
    }
    return count;
}
int countW(char *str)
{
    int i, count = 1;

    for (i = 1; str[i]; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    return count;
}
```

### 5. Write a program to read a sentence & delete all the white spaces. Replace all “.” by “,”. 

> Test Data:

    Enter the string: Keep your eyes on the stars and your feet on the ground.
    
> Expected Output:

    Keepyoureyesonthestarsandyourfeetontheground,

> Source Code:

```c
#include <stdio.h>

int main()
{
    void deleteSpace(char *);
    void replace(char *, char, char);
    char str[200];
    int ch, cw;

    printf("Enter the sentence: ");
    gets(str);

    deleteSpace(str);
    replace(str, '.', ',');

    printf("%s", str);
    return 0;
}

void deleteSpace(char *str)
{
    int i, j;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; str[j + 1]; j++)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
}
void replace(char *str, char r, char t)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == r)
        {
            str[i] = t;
        }
    }
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-VIII</b></p>

### 1. Write a program to copy one string to another string with and without using string handling function. 

> Test Data:

    Enter a string: Hello World

> Expected Output:

    Using Library Function: Hello World
    Using Loop: Hello World

> Source Code:

```c
#include <stdio.h>
#include <string.h>

int main(){
    void copyStr(char *, char *);
    char str1[30];
    char str2[30];
    char str3[30];

    printf("Enter a string: ");
    fgets(str1, 30, stdin);

    // Using library function
    strcpy(str2, str1);
    printf("Using Library Function: %s", str2);

    // Without using library function
    copyStr(str3, str1);
    printf("Using Loop: %s", str3);
    return 0;
}
void copyStr(char *str2, char *str1){
    int i;
    for(i = 0;str1[i]; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
```

### 2. Write a program to concatenate two strings. 

> Test Data:

    Enter first string: Hello
    Enter second string: World
    
> Expected Output:

    Concatenation string: Hello World
    
> Source Code:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    void concat(char *, char *);
    char str1[60];
    char str2[30];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    concat(str1, str2);
    printf("Concatenation string: %s", str1);
    return 0;
}
void concat(char *s1, char *s2)
{
    int i, l1, l2, j = 0;
    l1 = strlen(s1);
    l2 = strlen(s2);
    for (i = l1; i < l1 + l2 + 1; i++)
    {
        s1[l1] = ' ';
        s1[i + 1] = s2[j];
        j++;
    }
    s1[i] = '\0';
}
```

### 3. Write a program to compare two strings. 

> Test Data:

    Enter first string: Hello
    Enter second string: World
    
> Expected Output:

    Not Same

> Source Code:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    int comStr(char *, char *);
    char str1[30];
    char str2[30];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (comStr(str1, str2))
        printf("Same String");
    else
        printf("Not Same");
    return 0;
}
int comStr(char *s1, char *s2)
{
    int i, l1, l2;
    l1 = strlen(s1);
    l2 = strlen(s2);
    if (l1 != l2)
        return 0;
    for (i = 0; i < l1; i++)
    {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
```

### 4. Write a program to sort 5 string words stored in an array of pointers. 

> Test Data:

> Expected Output:

> Source Code:

```c

```

### 5. Write a program to print the following pattern 

    U N
    U N I V
    U N I V E R
    U N I V E R S I
    U N I V E R S I T Y

> Expected Output:

    U N 
    U N I V 
    U N I V E R 
    U N I V E R S I 
    U N I V E R S I T Y 
    
> Source Code:

```c
#include <stdio.h>

int main()
{
    char str[20] = "UNIVERSITY";
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i * 2 + 1; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    return 0;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-IX</b></p>

### 1. Create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members’ value. 

> Test Data:

    Enter Employee Name: Parth Saini
    Enter Employee Address: Kolkata
    Enter Employee Phone: 123456789 
    Enter Number of Employee: 1

> Expected Output:

    Employee Name: Parth Saini
    Employee Address: Kolkata
    Employee Phone: 123456789
    Number of Employee: 1

> Source Code:

```c
#include <stdio.h>

struct company
{
    char name[30];
    char address[100];
    long long int phone;
    int noOfEmployee;
};

int main()
{
    struct company emp1;

    printf("Enter Employee Name: ");
    gets(emp1.name);
    printf("Enter Employee Address: ");
    gets(emp1.address);
    printf("Enter Employee Phone: ");
    scanf("%lld", &emp1.phone);
    printf("Enter Number of Employee: ");
    scanf("%d", &emp1.noOfEmployee);

    printf("\nEmployee Name: %s", emp1.name);
    printf("\nEmployee Address: %s", emp1.address);
    printf("\nEmployee Phone: %lld", emp1.phone);
    printf("\nNumber of Employee: %d", emp1.noOfEmployee);
    return 0;
}
```

### 2. Write a program to enter to Cartesian coordinate points and display the distance between them. 

> Test Data:

    Input x1: 25
    Input y1: 15
    Input x2: 35
    Input y2: 10

> Expected Output:

    Distance between the said points: 11.1803
    
> Source Code:

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;

    printf("\nInput x1: ");
    scanf("%f", &x1);
    printf("\nInput y1: ");
    scanf("%f", &y1);
    printf("\nInput x2: ");
    scanf("%f", &x2);
    printf("\nInput y2: ");
    scanf("%f", &y2);

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("Distance between the said points: %.2f", distance);
    return 0;
}
```

### 3. Write a function which accepts structure as argument and returns structure to the calling program.

> Test Data:

    Enter Student Name: Parth
    Enter Roll number: 1

> Expected Output:
    
    Student Name: Parth
    Student Roll no: 1

> Source Code:

```c
#include <stdio.h>

struct student
{
    char name[50];
    int rollNo;
};

int main()
{
    struct student input(struct student);
    struct student s1;
    struct student s;
    s = input(s1);

    printf("\nStudent Name: %s", s.name);
    printf("\nStudent Roll no: %d", s.rollNo);
    return 0;
}

struct student input(struct student s1)
{
    printf("Enter Student Name: ");
    gets(s1.name);
    printf("Enter Roll number: ");
    scanf("%d", &s1.rollNo);
    return s1;
}
```

### 4. Pass the structures defined in Question 1 into a function and read the structure member and display the values from the function (use structure pointer). 

> Test Data:

    Enter Employee Name: Parth
    Enter Employee Address: Kolkata
    Enter Employee Phone: 123456789
    Enter Number of Employee: 1

> Expected Output:

    Employee Name: Parth
    Employee Address: Kolkata
    Employee Phone: 123456789
    Number of Employee: 1
    
> Source Code:

```c
#include <stdio.h>

struct company
{
    char name[30];
    char address[100];
    long long int phone;
    int noOfEmployee;
};

int main()
{
    void input(struct company *);
    void print(struct company *);
    struct company emp1;

    input(&emp1);
    print(&emp1);
    return 0;
}

void input(struct company *emp1)
{
    printf("Enter Employee Name: ");
    gets(emp1->name);
    printf("Enter Employee Address: ");
    gets(emp1->address);
    printf("Enter Employee Phone: ");
    scanf("%lld", &emp1->phone);
    printf("Enter Number of Employee: ");
    scanf("%d", &emp1->noOfEmployee);
}

void print(struct company *emp1)
{
    printf("\nEmployee Name: %s", emp1->name);
    printf("\nEmployee Address: %s", emp1->address);
    printf("\nEmployee Phone: %lld", emp1->phone);
    printf("\nNumber of Employee: %d", emp1->noOfEmployee);
}
```

### 5. Define a structure “complex” (typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result. 

> Test Data:

    For 1st complex number
    Enter the real and imaginary parts: 2.1 -2.3
    
    For 2nd complex number
    Enter the real and imaginary parts: 5.6 23.2

> Expected Output:

    Sum = 7.7 + 20.9!
    Subtraction = -3.5 - -25.5!

> Source Code:

```c
#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

int main()
{
    complex sumComplex(complex, complex);
    complex subComplex(complex, complex);
    complex c1, c2, sum, sub;

    printf("\nFor 1st complex number");
    printf("\nEnter the real and imaginary parts: ");
    scanf("%f%f", &c1.real, &c1.imag);

    printf("\nFor 2nd complex number");
    printf("\nEnter the real and imaginary parts: ");
    scanf("%f%f", &c2.real, &c2.imag);

    sum = sumComplex(c1, c2);
    sub = subComplex(c1, c2);

    printf("\nSum = %.1f + %.1f!", sum.real, sum.imag);
    printf("\nSubtraction = %.1f - %.1f!", sub.real, sub.imag);
    return 0;
}
complex sumComplex(complex c1, complex c2)
{
    complex s;
    s.real = c1.real + c2.real;
    s.imag = c1.imag + c2.imag;
    return s;
}
complex subComplex(complex c1, complex c2)
{
    complex s;
    s.real = c1.real - c2.real;
    s.imag = c1.imag - c2.imag;
    return s;
}
```

### 6. Write a program to read RollNo, Name, Address, Age & average-marks of 12 students in the BCA class and display the details from function. 

> Test Data:
    Enter number of student: 2

    Enter Roll number of 1: 1
    Enter Name of 1: Dev
    Enter Address of 1: Asansol
    Enter Age of 1: 20
    Enter Marks of 1: 95

    Enter Roll number of 2: 2
    Enter Name of 2: Raj
    Enter Address of 2: Asansol
    Enter Age of 2: 19
    Enter Marks of 2: 89

> Expected Output:

    Roll Number: 1  Name: Dev       Address: Asansol        Age: 20         Marks:  95
    Roll Number: 2  Name: Raj       Address: Asansol        Age: 19         Marks:  89

> Source Code:

```c
#include <stdio.h>

typedef struct student
{
    int rollNo;
    char name[50];
    char address[100];
    int age;
    int marks;
} student;

int main()
{
    void input(student *, int);
    void print(student *, int);
    student s[100];
    int l = 12;

    printf("Enter number of student: ");
    scanf("%d", &l);

    input(s, l);
    print(s, l);
    return 0;
}
void input(student *s, int l)
{
    int i;
    for (i = 0; i < l; i++)
    {
        printf("\n\nEnter Roll number of %d: ", i + 1);
        scanf("%d", &s[i].rollNo);
        fflush(stdin);
        printf("Enter Name of %d: ", i + 1);
        gets(s[i].name);
        fflush(stdin);
        printf("Enter Address of %d: ", i + 1);
        gets(s[i].address);
        fflush(stdin);
        printf("Enter Age of %d: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Enter Marks of %d: ", i + 1);
        scanf("%d", &s[i].marks);
    }
}
void print(student *s, int l)
{
    int i;

    for (i = 0; i < l; i++)
    {
        printf("\nRoll Number: %d \tName: %s \tAddress: %s \tAge: %d \tMarks:\t%d", s[i].rollNo, s[i].name, s[i].address, s[i].age, s[i].marks);
    }
}
```

### 7. Write a program to show programming examples with union and enumerations. 

> Expected Output:

    ID = 5 Bool = 1
    
> Source Code:

```c
#include <stdio.h>

union student
{
    int id;
    double ph;
    float wh;
};

enum bool
{
    false,
    true
};

int main()
{
    union student s;
    enum bool var;

    s.id = 5;
    var = true;

    printf("ID = %d Bool = %d", s.id, var);
    return 0;
}
```

<p style="text-align:center;font-size:1.2rem"><b>SET-X</b></p>

### 1. Write characters into a file “filec.txt”. The set of characters are read form the keyboard until an enterkey is pressed (use putc() and getc() function). 

> Test Data:

    Enter the string: Keep your eyes on the stars and your feet on the ground
    
> Expected Output:

    Keep your eyes on the stars and your feet on the ground

> Source Code:

```c
#include <stdio.h>

int main()
{
    FILE *fp;
    FILE *fptr;
    char str[200];
    int i;
    char ch;

    fp = fopen("filec.txt", "w");

    printf("Enter the string: ");
    gets(str);

    for (i = 0; str[i]; i++)
    {
        putc(str[i], fp);
    }
    fclose(fp);

    fptr = fopen("filec.txt", "r");

    if (fptr == NULL)
    {
        printf("FILE not open");
        exit(1);
    }

    while (1)
    {
        ch = getc(fptr);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}
```

### 2. Read characters form file “filec.txt” created in question 1. Also count the number of characters in the file (use fputs() and fgets() function). 

> Expected Output:
> 
    Hello World!
    Number of character = 12

> Source Code:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int count = 0;
    char ch;

    fptr = fopen("filec.txt", "r");
    if (fptr == NULL)
    {
        printf("FILE not open");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
            break;
        count++;
        printf("%c", ch);
    }
    printf("\nNumber of character = %d", count);
    fclose(fptr);
    return 0;
}
```

### 3. Write set of strings each of length 40 into a file “stringc.txt” and display it (use fputs() and fgets() function). 

> Test Data:

> Expected Output:

> Source Code:

```c

```

### 4. Write name, age and height of a person into a data file “person.txt” and read it (use fprintf() and fscanf() function) 

> Enter name, age and height of a person into a data file “person.txt”

```c
#include <stdio.h>

typedef struct person
{
    char name[50];
    int age;
    float height;
} person;

int main()
{
    FILE *fp;
    person p;
    char an = 'y';

    fp = fopen("person.txt", "w");

    while (an == 'y')
    {
        printf("Enter Person Name: ");
        scanf("%s", p.name);

        printf("\nEnter Person Age and Height: ");
        scanf("%d%f", &p.age, &p.height);
        fflush(stdin);
        printf("Enter another person data (y/n): ");
        scanf("%c", &an);
        fprintf(fp, "\n%s %d %f", p.name, p.age, p.height);
        fflush(stdin);
    }

    fclose(fp);
    return 0;
}
```

> Read data from file person.txt
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    char name[50];
    int age;
    float height;
} person;

int main()
{
    FILE *fp;
    person p;

    fp = fopen("person.txt", "r");

    if (fp == NULL)
    {
        printf("Cannot open file");
        exit(1);
    }

    while (fscanf(fp, "%s%d%f", p.name, &p.age, &p.height) != EOF)
    {
        printf("\n%s %d %f", p.name, p.age, p.height);
    }

    fclose(fp);
    return 0;
}
```
### 5. Write a program to replace DOS command “type” by “watch”. The “watch” command is to be created by C program “watch.c” and read the file “filec.txt” written in question no 1. (In DOS, we use the command like #type filec.txt which is to be replaced like #watch filec.txt)

> Test Data:

> Expected Output:

> Source Code:

```c

```

