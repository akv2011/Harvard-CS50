#include<stdio.h>
#include "cs50.h"

int main(void)
{
    int numbers[]={44,55,54,5,33,545,4};
    int n=get_int("Nuber:\n");
    for (int i = 0; i <7; i++)
    {
        if(n==numbers[i])
        {
            printf("Found\n");
            
        }
        else
        {
            printf("Not a eligible no\n");
            
        }
        

        
    }

    /*
    if(n==numbers[i])
        {
            printf("Found\n");
            
        }
        else
        {
            printf("Not a eligible no\n");
            
        }
    
    
    
    
    */
    
}