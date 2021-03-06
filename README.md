### Chapters name and description

```
Chapter 1:OverView Of C
Chapter 2:Constants Variables and Data types
Chapter 3:Operators and Expressions
Chapter 4:Managing Input and Output Operation
Chapter 5:Decision making and branching.
Chapter 6:Decision making and looping.
Chapter 7:Arrays.
Chapter 8:Character arrays and strings.
Chapter 9:User defined functions.
Chapter10:Structures and unions.
Chapter11:Pointers.
Chapter12:File management in C.
Chapter13:Dynamic memory allocation and linked list.
Chapter14:The preprocessor in C.
```
### Chapter 9:User-Defined Functions
```
A function is self contained block of code that perform a particular task.
A function is treated as a black box
Function takes some data from the main function and return a value
```
#### Parts of Functions
```
1.Function header
2.Function body

1.Function header:
	1)function names
	2)function types
	3)list of parameters
2.Function body
	4)local variable decleration
	5)function statements
	6)A return statement

function_type function_name(parameter list)
	{
		local variable declaration;
		executable statement;
		....................
		....................
		return statement;
	}
```
##### Category of Functions:
```
	1.Function with no arguments and no return value
	2.Functions with arguments and no return value
	3.Functions with arguments and return value
	4.Function with no arguments but return a values
	5.Function that return multiple value
```
#### 1.Function with no arguments and no return value
```.c
/*
    Function with no arguments no return value
*/

#include <stdio.h>
void add (void);
main()
{
	add();
}
void add (void)
{
	int a,b,s;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	s=a+b;
	printf("addition of two number=%d",s);

}
```
#### 2.Functions with arguments and no return value
```.c
/*
    Function with  arguments no return value
*/

#include <stdio.h>
void add (int,int);//function declearation
main()
{
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	add(a,b);//formal function
}
void add (int x,int y)//actual function//function defination
{
	int s;
	s=x+y;
	printf("addition of two number=%d",s);
}
```
#### 4.Function with no arguments but return a values
```.c
/*
    Function with  no arguments return value
*/

#include <stdio.h>
int sqrt (void);//function declearation
main()
{
	int ans;
    ans=sqrt();
	printf("addition of two number=%d",ans);
}
int sqrt (void)//actual function//function defination
{
	int s,n;
	printf("Enter a number:");
	scanf("%d",&n);
	s=n*n;
return (s);
}
```
#### 4.Function with no arguments but return a values
```.c
/*
    Function with  arguments return value
*/

#include <stdio.h>
int add (int,int);//function declearation
main()
{
	int a,b,ans;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	ans=add(a,b);//formal function
	printf("Addition=%d",ans);
}
int add (int x, int y)//actual function//function defination
{
	int c;
	c=x+y;
	return c;
}



```
### Small Projects
#### Inventory Reports

```
Enter Code, Quantity and Rate:
a11 215 102
Enter Code, Quantity and Rate:
ar3 123 546.02
Enter Code, Quantity and Rate:
t556y 567 980.67
Enter Code, Quantity and Rate:
ty7u 56 768.098
       Inventory Report
---------------------------------------
Code       Quantity      Rate     Value
---------------------------------------
  a11        215     102.00   21930.00
  ar3        123     546.02   67160.46
t556yty7u    567     980.67  556039.88
 ty7u         56     768.10   43013.49
--------------------------------------
            Total value =688143.812500
----------------------------------------
```
#### Bill Pay Calculation
```
Enter leve, jobnumber and basic pay
Enter 0 for level to END
2
23
5000
2 23 10074.23

Enter leve, jobnumber and basic pay
Enter 0 for level to END
0
End of the program
```
### Discount Calculation
```
Enter level, customerNumber and Price
Enter 0 for level to END
1
11
890
Net amount=845.500000

Enter level, customerNumber and Price
Enter 0 for level to END
2 
546
5678
Net amount=4968.250000

Enter level, customerNumber and Price
Enter 0 for level to END
0
End of the program

```
### Programming Exercise 

```
1.	C hello world program
2.	C program to print an integer
3.	C program to add two numbers
4.	C program to check odd or even
5.	C program to add, subtract, multiply and divide numbers
6.	C program to check vowel
7.	C program to check leap year
8.	Sum of digits C program
9.	Factorial program in C
10.	C program to find HCF and LCM
11.	C program to convert decimal to binary
12.	C program to find nCr and nPr
13.	C program to add n numbers
14.	Swap C program
15.	C program to reverse a number
16.	C palindrome number program
17.	C pattern programs
18.	C diamond pattern program
19.	Prime number program in C
20.	C program for Armstrong number
21.	C program to generate Armstrong number
22.	Fibonacci series C program
23.	Floyd's triangle C program
24.	Pascal triangle C program
25.	Addition using pointers
26.	C program to find maximum number in array
27.	C program to find minimum number in array
28.	Linear search C program
29.	Binary search C program
30.	Reverse array C program
31.	C program to insert an element in an array
32.	C program to delete an element from array
33.	C program to merge two arrays
34.	Bubble sort C program
35.	Insertion sort C program
36.	Selection sort C program
37.	Add matrices
38.	Subtract matrices
39.	C program for transpose of a matrix
40.	Multiply two matrices
41.	C program to print a string
42.	String length C program
43.	Compare strings C program
44.	Copy string
45.	String concatenation C program
46.	Reverse string C program
47.	Palindrome C program (String and number)
48.	String to integer
49.	Delete vowels
50.	C substring program
51.	Check subsequence
52.	Sort a string
53.	Remove spaces
54.	Change case
55.	Swap strings
56.	Character's frequency
57.	Anagram program in C
58.	C program to read a file
59.	C program to copy files
60.	C program to merge two files
61.	C program to list files in a directory
62.	Delete a file
63.	Random number generator C program
64.	Add complex numbers
65.	Print date
66.	Get IP address
67.	Shutdown computer
68.	Convert Decimal To Binary
```
# Solution Link
### https://www.programmingsimplified.com/c-program-add-matrices
# 10.Greatest Common Factor And Least Common Multiply

In mathematics, the greatest common divisor (gcd) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. For example, the gcd of 8 and 12 is 4
The greatest common divisor is also known as the greatest common factor (gcf), highest common factor (hcf),greatest common measure (gcm),or highest common divisor
## Ways of doing GCD

	1.Notation
	2.Using prime factorizations
	3.Using Euclid's algorithm

### 1.Notation

## Find the greatest common divisor of :28,48,72

```
The divisors of each number are given by
                           28=1,2,4,7,14,28
                           48=1,2,3,4,6,8,12,16,24,48
                           72=1,2,3,4,6,8,9,12,18,24,36,72

The largest number that appears on every list is 2 so this is the greatest common divisor:
                            gcd(30,36,28)=2
```
### 2.Using prime factorizations
```
The prime factorizations of 28=(2,2,7)
The prime factorizations of 48=(2,2,2,2,3)
The prime factorizations of 72=(2,2,2,3,3)

Common prime factorizations of 28,48,72 are=2,2
So 
	GCD=2*2
	   =4
```
### 3.Using Euclid's algorithm
````
 	28)48(1
 	   28
 	  ____
 	20)28(1
 	   20
 	 ______
            8)20(2
              16
            ______
               4)8(2
          	 8
               _____
          	 0
    4)72(18
      4
    _____
      32
      32
    ______
       0
 So the GCD=4
````
# Least common multiple

In arithmetic and number theory, the least common multiple, lowest common multiple, or smallest common multiple of two integers a and b, usually denoted by LCM(a, b), is the smallest positive integer that is divisible by both a and b.Since division of integers by zero is undefined, this definition has meaning only if a and b are both different from zero.However, some authors define lcm(a,0) as 0 for all a, which is the result of taking the lcm to be the least upper bound in the lattice of divisibility.

## Ways of doing least common multiple, lowest common multiple, or smallest common multiple

	1.Notation
	2.Using prime factorizations
	3.Using Euclid's algorithm

### 1.Notation

## Find the greatest common divisor of 4 and 6
```
Multiples of 4 are:
4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, ...

and the multiples of 6 are:
6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, ...

Common multiples of 4 and 6 are simply the numbers that are in both lists:

12, 24, 36, 48, 60, 72, ....
So, from this list of the first few common multiples of the numbers 4 and 6, their least common multiple is 12.

```
### 2.Using prime factorizations
```
The prime factorizations of 4=2*2
The prime factorizations of 6=2*3

Prime factorizations of 4,6=2,2,3
So 
	LCM=2*2*3
	   =4
```

		
