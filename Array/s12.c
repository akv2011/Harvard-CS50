#include<stdio.h>
#include "cs50.h"
int main(int argc,string argv[])
{
    if(argc!=2)
    {
        printf("Missing command line argument");
        return 1;
    }

    else
    {
        printf("Hello,%s\n",argv[1]);
        return 0;//Default also 0//
    }
}


/*
Example for echo$? use

$ echo$?
bash: echo0: command not found

$ echo $?
127

*/