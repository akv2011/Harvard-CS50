
/*
#include<stdio.h>
#include<stdlib.h>
 typedef struct node
 {
    int number;
    struct node *next;
 }
 node;
int x;
int main(void)
{
scanf("%i\n",&x);
printf("Number of Elements: %i\n",x);

node *list=NULL;
for (int i = 0; i <x; i++)
{
    int number=printf("Enter the number: %i\n");
    scanf("%i\n",number);




node *n=malloc(sizeof(node));
if (n==NULL)
{
    return 1;
}

n->number=number;
n->next=list;
list=n;

}

node *ptr=list;
while (ptr!=NULL)
{
    printf("%i\n",ptr->number);
    ptr=ptr->next;
}

ptr=list;
while (ptr!=NULL)
{
    node *next=ptr->next;
    free(ptr);
    ptr=next;
}


}

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    int x;
    printf("Number of Elements: ");
    scanf("%i", &x);

    node *list = NULL;
    for (int i = 0; i < x; i++)
    {
        int number;
        printf("Enter the number: ");
        scanf("%i", &number);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        n->number = number;
        n->next = list;
        list = n;
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // Freeing the allocated memory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}
