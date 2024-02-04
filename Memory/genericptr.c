#include <stdio.h>

int main(void) {
    int num = 42;
    double pi = 3.14159;
    
    void *genericPtr;

    // Point the generic pointer to an int
    genericPtr = &num;
    printf("Value at the generic pointer: %d\n", *(int *)genericPtr);

    // Point the generic pointer to a double
    genericPtr = &pi;
    printf("Value at the generic pointer: %f\n", *(double *)genericPtr);

    return 0;
/*

In this example, the void * pointer (genericPtr) is used to point to both an int and a double.
The key is tocast the generic pointer to the correct type before dereferencing it. 
The cast tells the compiler the type of data it's pointing to, allowing proper dereferencing.

In the context of your previous question, 
casting the pointer to void * in printf("0x%p\n", 
(void *)&n); is used to treat the pointer to int as a generic pointer
 and avoid the type mismatch warning.


*/



}
