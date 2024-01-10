#include<stdio.h>
#include "cs50.h"

int main(void)
{
    long x =get_long("Num x:");
    long y =get_long("Num y:");
    
    printf("%li\n",x+y);
    float z= (float)x/ (float)y ;
    
    /*

    Num:1
    Num:3
    4
    0.000000
    
    This output here as need to typecast

    */
    printf("%f\n",z);

    float a= (float)x/ (float)y ;
    printf("%0.20f\n",a);


    double b= (double)x/ (double)y ;
    printf("%0.20f\n",b);

//double for more precission


}

