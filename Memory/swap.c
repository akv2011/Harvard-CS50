#include<stdio.h>
void swap (int *a,int *b);
int main (void)
{
    int x=1;
    int y=2;
     
    printf("X is  %i, Y is %i\n",x,y);
    swap(&x,&y);
    printf("X is  %i, Y is %i\n",x,y);



}

void swap (int *a,int *b)
{
int tmp=*a;//deferencing a here//
*a=*b;
*b=tmp;
}


/*

pass by value here a copy of the value is used in the function


void swap (int a,int b)
{
int tmp=a;
a=b;
b=tmp;
}
*/