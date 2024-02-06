#include<stdio.h>

int main(void)
{
    int n=50;
    int *p=&n;
    printf("%p\n",p);
}

/*
In C, when you use the * operator in a declaration like int *ptr = &value;, 
it means that ptr is a pointer variable that can store the address of an integer.
 When you later dereference it using *ptr, 
 you get the value stored at the address pointed to by ptr.
*/