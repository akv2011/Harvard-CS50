#include<stdio.h>

int main(void)
{
    int n=50;
    printf("%p\n",&n);
    printf("0x%x\n", &n);

    /*


    warning: format specifies type 'unsigned int' but the argument has type 'int *' [-Wformat]
    7 |     printf("0x%x\n", &n);
      |               ~~     ^~
    1 warning generated.

    The warning is indicating a type mismatch between the 
    format specifier and the argument in your printf statement.
     The %x format specifier is intended for unsigned integers, 
    but you are providing the address of an integer variable (&n),
     which has the type int * (pointer to int).
    
    
    
    
    */
    printf("0x%p\n", (void *)&n);
    /*
     The cast to (void *) 
     is used to explicitly indicate that you are converting the pointer to a generic pointer.
    
    A generic pointer in C is a pointer that is declared using the void * type. 
    The void * type is a generic pointer type that can point to an object of any data type.
     It is often used when you want to create functions 
     or data structures that can work with different types of data.
    
    */


   /*
   
   
The first line 00000039369FF71C is the output of %p without the "0x" prefix. 
The %p specifier typically prints the address in the platform-specific format.

The second line 0x369ff71c is the output of %p with the "0x" prefix,
 which is a common representation for hexadecimal addresses.

The third line 0x00000039369FF71C is the output of %#x, 
which includes the "0x" prefix and pads with zeros to fill the width of the address.
   
   */

    
}