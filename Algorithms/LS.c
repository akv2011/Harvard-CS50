#include<stdio.h>
#include "cs50.h"

int main(void)
{
    int numbers[]={44,55,54,5,33,545,4};
    int n=get_int("Number:\n");
    for (int i = 0; i <7; i++)
    {
        if(n==numbers[i])
        {
            printf("Found\n");
            return 0;
             
        }
    
    }
    printf("Not a eligible no\n");
    return 1;
}

    /*
    if(n==numbers[i])
        {
            printf("Found\n");
            return 0; on using this is correct number found it exist loop            
        }
        else
        {
            printf("Not a eligible no\n");
            
        }
    
    Nuber:
454
Not a eligible no
Not a eligible no
Not a eligible no
Not a eligible no
Not a eligible no
Not a eligible no
Not a eligible no
    
{
        if(n==numbers[i])
        {
            printf("Found\n");
             
        }
    
    }
    printf("Not a eligible no\n");


    Number:
    4
    Found
    Not a eligible no   


    
    */
    
