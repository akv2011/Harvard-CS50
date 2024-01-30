#include<stdio.h>
#include "cs50.h"

int N=3;
float average(int array[]);

int main(void)


{
    int Score[N];
    for(int i=0;i<N;i++)
    {
        Score[i]=get_int("Score is:\n");
    }
    printf("Average: %f\n",average(Score));
}

float average(int array[])
// float average(int array[]); no semicolon here//
{
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum=sum+array[i];
    }
    return sum/(float)N;

    
}
