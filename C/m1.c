#include<stdio.h>
#include"cs50.h"
int main(void)
{
    const int n = get_int("Size:");
    //need to declare onlu once n 
    for (int i= 0; i<n; i++)
    {

        for (int j= 0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");   
    }
    
}