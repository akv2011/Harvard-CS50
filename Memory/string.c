#include<stdio.h>
#include<string.h>

int main(void)
{
    char *s="HI!";
    //cant use string s="HI"; directly w/o cs50//

    //Here s is a pointer tha stores address og h oinly one needed as at end 0/ termination//
    printf("%p\n",s);
    printf("%s\n",s);
    printf("%c\n",*s);
     printf("%c\n",*(s+1));
      printf("%c\n",*(s+2));
       printf("%c\n",*(s+500000));//Segmentation fault touching memeory that isn't mine//
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n",&s[3]);
}
