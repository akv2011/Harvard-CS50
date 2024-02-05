#include<stdio.h>
#include"cs50.h"
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int n;
int main(void)
{
char *s=get_string("Enter s:");

if (s==0)
{
    return 1;
    /*This is done here as get_string and malloc returns
     null value when something is wrong like using larger files etc..
     thus return 1 is used to show what error */
}

char *t=malloc(strlen(s)+1);

strcpy(s,t);


if (strlen(t)>0)//To avoid segementation fault//
{
    t[0]=toupper(t[0]);
}



printf("S: %s\n",s);
printf("T: %s\n",t);


free(t);
//Used to free unused memeory whenever malloc used//
}