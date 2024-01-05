#include<stdio.h>
#include "cs50.h"
int main(void)
{
    int x=get_int("Enter th first number:");
    int y=get_int("Enter the Second number:");
    if (x>y)
    {
        printf("x is greater than y");
    }
    else if(y>x)
    {
        printf("y is greater than x");
    }
    else
    {
        printf("X is equal to y");
    }
}
    
