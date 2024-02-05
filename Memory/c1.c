#include<stdio.h>
#include"cs50.h"
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int n;
int main(void)
{
char *s=get_string("Enter s:");
char *t=malloc(strlen(s)+1);

for (int i = 0, n=strlen(s)+1; i <n ; i++)
{
    t[i]=s[i];
}

if (strlen(t)>0)//To avoid segementation fault//
{
    t[0]=toupper(t[0]);
}



printf("S: %s\n",s);
printf("T: %s\n",t);

}