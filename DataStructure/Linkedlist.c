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


for (int i = 1; i < argc; i++)//starting at 1 as 0  is prg one//
{
    int number=atoi(argv[i]);//atoi to convert string to num//
    node *n=malloc(sizeof(node));
    if (n==NULL)
    {
        return 1;

    }
    n->number=number;
    n->next=NULL;
    n->next=list;
    //on first loop first node has null value same as list from second new node points to the first node //
    list=n;


}

node *ptr=list;
while (ptr!=0)
{
    printf("%i\n",ptr->number);
    ptr=ptr->next;
}

///freeing the ptr which traversed the lsit//
ptr=list;//resetting to starting no need to declare again as*ptr=list already done//
while (ptr!=NULL)
{
    node *next=ptr->next;
    free(ptr);
    ptr=next;
}


}