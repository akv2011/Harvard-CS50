#include<stdio.h>
#include"cs50.h"
#include<string.h>

int main(void)
{
string i=get_string("Enter i:");
string j=get_string("Enter j:");

if (i==j)

{
    printf("Same\n");
    
}
printf("Different\n");

/*
Enter iHI
Enter jHI
Different

as memory address different

*/



if (strcmp(i,j)==0)

{
    printf("Same\n");
    return 0;
}
printf("Different\n");

if(*i==*j && *(i+1)==*(j+1))

{
    printf("Same\n");
    return 0;
}
printf("Different\n");



}