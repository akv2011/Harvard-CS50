#include<stdio.h>
#include"cs50.h"
int main(void)
{
     int n = get_int("Size:");
    
    while(n<1)
    {
        n=get_int("Size:");
    }

    //here 2 time get string used unefficient so use do while loop

    for (int i= 0; i<n; i++)
    {

        for (int j= 0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");   
    }
    
}