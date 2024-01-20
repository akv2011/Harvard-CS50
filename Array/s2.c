#include<stdio.h>
#include "cs50.h"
int main(void)
{
    int number[3];
    for (int i = 0; i <3; i++)
    {
    number[i]=get_int("Score is:\n");
    }
    
    printf("average is:%f\n",number[0]+number[1]+number[2]/3.0);
    

}