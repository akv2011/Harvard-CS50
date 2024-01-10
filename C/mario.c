#include<stdio.h>
#include  "cs50.h"
int main(void)
{
    const int n=3;
    //const is used so thst n can't be modified down the line 
    for (int i= 0; i<n; i++)

/*for (int i= 0; i<n; i++);
printf("/n");

First, you have a semicolon after the for loop condition, 
which will cause the loop to do nothing.
Second, you have used /n instead of \n for a new line in the printf statement.*/


    //n++ like this can't change it
    {
        for (int j= 0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");   
    }
    
}