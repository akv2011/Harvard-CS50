#include<stdio.h>
#include<stdlib.h>


int main(void)
{
int *x;
int *y;

x=malloc(sizeof(int));

//allocating so that 4 bti size integer can be stored in x//

*x=14;
//*y=45;//

//y not inintialise anywhere with = thus what it contains in here at int *y is a garbage value//
//thus do this//
y=x;
*y=13;
}