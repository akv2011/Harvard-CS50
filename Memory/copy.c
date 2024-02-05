#include<stdio.h>
#include"cs50.h"
#include<ctype.h>
#include<string.h>

int main(void)
{
char *s=get_string("Enter s:");
char *t=s;

//In c here it copies the value of adsress not string//

if (strlen(t)>0)//To avoid segementation fault//
{
    t[0]=toupper(t[0]);
}



printf("S: %s\n",s);
printf("T: %s\n",t);

}