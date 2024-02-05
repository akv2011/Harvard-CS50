#include<stdio.h>
#include "cs50.h"
#include <string.h>
int main(void )
{
    string name[]={"Arun","Kumar"};
    string numbers[]={"456782133","6552468544"};
    string n=get_string("Enter the name:\n");
    for (int i = 0; i <2; i++)
    {
        if (strcmp(name[i],n)==0)
        {
            printf("Found: %s\n",numbers[i]);
            return 0;
        }
        
    }
    printf("Not found\n");
    
}