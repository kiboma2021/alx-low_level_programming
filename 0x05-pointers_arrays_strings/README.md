---POINTERS AND ARRAYS---

Every time you declare a variable, the computer will reserve memory for this variable. 
The memory reserved will then store the value of the variable.

Depending on the type of the variable, the computer will reserve more or less memory.

Here are the sizes of the most common types on most 64-bit Linux machines:

	char -> 1 byte /*1 byte =8 bits*/
	int ->4 bytes
	float -> 4 bytes

We can sizeoff can be used to find size of a variable

	#include<stdio.h>
	/**
	 * 
	 * Main - size of char, int and float
	 * 
	 * Return - Always return 0
	 * 
	 */
	 int main(void)
	 {
	   int n;
	   int p;
	   printf("Size of 'char' is: %lu bytes\n",sizeof(char));
	   printf("Size of 'int' is: %lu bytes\n",sizeof(int));
	   printf("Size of 'float' is: %lu bytes \n", sizeof(float));
	   return(0);
	 }


When we declare a variable, the computer will reserve the right amount of space for the variable in the memory (depending on its type). 
The space reserved for the variable is its address. And when we assign a value to this variable, the computer will store this value at 
its address.

One does not control the address where the variable is stored. In order to know what is the address of a variable, 
you can use the “address-of unary operator” &

	#include<stdio.h>
	/**
	 * Main - Address of variables
	 * 
	 * Return - Always return 0
	 * 
	 */
	 int main(void)
	 {
	   char c;
	   int n;
	   
	   printf("The address of variable 'c' is: %p\n", &c);
	   printf("The address of variable 'n' is: %p\n", &n);
	   return(0);
	   
	 }

NOTE: You can use %p to print addresses (the values of pointers) with printf


---STORING MEMORY ADDRESSES---

A pointer is simply the address of a piece of data in memory. A pointer variable is a variable that stores the address 
of that piece of data. 

	var_type *var;

	The * tells that the variable var is a pointer that points to a var_type.

	int *ptr; - /* ptr is the name of the variable, of type “pointer to an integer”*/ 

	char *ptr2 - /* ptr2 is a pointer to a char */

Because a pointer is like any other variable, the computer will also reserve the right amount of memory for it to store its value. 
On most 64 bits machines, the size of pointers is 8 bytes.

	#include<stdio.h>
	/**
	 * 
	 * Main - size of pointers in bytes
	 * 
	 * Return - Always 0
	 * 
	 */
	 int main(void)
	 {
	   int *p;
	   printf("The size of pointer 'p' is: %lu\n", sizeof(p));
	   return(0);
	 }


To get the address where a pointer is stored, you can use the same technique as for any other variable: use the & operator.

	#include<stdio.h>
	/**
	 * Main - Address of pointers
	 * 
	 * Return - Always 0.
	 * 
	 */
	 int main(void)
	 {
	   int *p;
	   printf("Address of pointer 'p' is: %p\n",&p);
	   return(0);
	 }

int n;
int *p; 

n = 98;
p = &n;  

Because &n gives us the address of the variable n, the variable p now holds the address of the variable n: p points to n. 
If the variable n’s address were 26, then the value of our pointer p would be 26.


---DEFERENCING---








1. Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
	Prototype: void reset_to_98(int *n);

2. Write a function that swaps the values of two integers.
	Prototype: void swap_int(int *a, int *b);

3. Write a function that returns the length of a string.
	Prototype: int _strlen(char *s); 

4. Write a function that prints a string, followed by a new line, to stdout.
	Prototype: void _puts(char *str);

5. Write a function that prints a string, in reverse, followed by a new line.
	Prototype: void print_rev(char *s); 

6. Write a function that reverses a string.
	Prototype: void rev_string(char *s);

7. 
