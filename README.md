### Chapters name and description

```
Chapter 1:OverView Of C
Chapter 2:Constants Variables and Data types
Chapter 3:Operators and Expressions
Chapter 4:Managing Input and Output Operations
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
```
# 10.Greatest Common Factor

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
