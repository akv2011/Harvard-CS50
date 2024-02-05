#include<stdio.h>

int main(void)
{
    int x;
   printf("x:");
    scanf("%i",&x);
    //here &x specifies the adreesss or the treasure map of the x inintalised//
     printf("x is  %i\n",x);
    

char *s;//no allocation of memory here thus null//
printf("s :");
scanf("%s",s);
printf("s is  %s\n",s);

/*
An input buffer is a region of memory used to temporarily
 store data that is being read from an input source, 
such as the keyboard, a file, or another input device. 
It allows the program to read data in chunks rather than one character at a time,
 which can be more efficient.

When you use input functions like scanf in C to read data
 from the standard input (e.g., the keyboard), the input buffer is used 
 to store the characters until they are consumed by the program. 
 The buffer allows the program to wait for a complete input line or a 
 specified pattern before processing the data.

Here's a simple explanation of how it works:

You input data (e.g., type characters on the keyboard).
The input functions (like scanf) read the data and store it in the input buffer.
The program processes the data from the buffer when it's ready.
In the context of the previous discussion about reading strings using scanf,
 understanding the input buffer is essential. When you use scanf to read a string,
  it stops reading at the first whitespace character (e.g., space or newline). 
  The newline character is often left in the input buffer, 
  and it can affect subsequent input operations.

To handle this, you might need to clear the input buffer
 using techniques like while (getchar() != '\n'); 
 before reading strings or characters to ensure that any 
 leftover newline characters are consumed.



*/
while (getchar() != '\n');

char a[4];
printf("a :");
scanf("%s",a);
printf("a is  %s\n",a);

}