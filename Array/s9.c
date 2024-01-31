#include<stdio.h>
#include "cs50.h"
#include<string.h>
#include<ctype.h>

int main(void)
{
string s=get_string("Before:");
printf("After:");
int n=strlen(s);
for (int i=0;  i<n; i++)

/*for (int i=0;i<strlen(s);i++) strlen is claeed
 here everytime to optime do like above and assign one time as n*/

{
    if(islower(s[i]))
    {
        printf("%c",toupper(s[i])); 
    }
    
}
}