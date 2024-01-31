#include<stdio.h>
#include "cs50.h"

int main(void)
{
    int numbers[]={44,55,54,5,33,545,4};
    int n=get_int("Number:\n");
    for (int i = 0; i <7; i++)
    {
        numbers[i]=n;
        printf("Found\n");
        return 0;
    }
    printf("Not Found\n");

    /*
    printf("Found\n");
    Without return 0 loop still runs
    Nuber:
4
Found
Found
Found
Found
Found
Found
Found

 */
        
     
}