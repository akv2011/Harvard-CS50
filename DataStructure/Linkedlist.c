#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node ;

int main(int argc,char *argv[])
{

node *list=NULL;

int *n=malloc(sizeof(node));
for (int i = 1; i < argc; i++)//starting at 1 as 0  is prg one//
{
    int number=atoi(argv[i]);
}




}