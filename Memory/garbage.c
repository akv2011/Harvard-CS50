#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int score[1024];

//Size is Initiaslise but not used in function hence garebage valuse is filled in the place//

for (int i = 0; i <sizeof(score); i++)
{
    printf("%i\n",score[i]);
}
}