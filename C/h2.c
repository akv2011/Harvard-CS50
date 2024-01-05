#include<stdio.h>
#include "cs50.h"
int main(void)
{
    string First=get_string("What's your name?");
    string Second=get_string("What's your last name?");
    printf("Hello,%s%s\n",First,Second);
}
