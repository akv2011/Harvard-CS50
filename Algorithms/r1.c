#include<stdio.h>
#include "cs50.h"

void draw(int n);

int main(void)
{
    int n=get_int("Enter size:\n");
    draw(5);
}

void draw(int n)
{
    if(n<=0)
    {
        return ;
    }

    draw(n-1);



    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

}