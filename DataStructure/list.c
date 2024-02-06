#include<stdio.h>
#include<stdlib.h>
 int main(void)
{
 int *list=malloc(3*sizeof(int));
if (list==NULL)
{
    return 1;
}
 list[0]=1;
 *(list+1)=2;//defrencing list and increment//
 *(list+2)=3;



int *tmp=malloc(4*sizeof(int));//can't have list=malloc(4*sizeof(int)); as now no one pointing to prev no's if list=malloc fails thus checking with if function//
if (tmp==NULL)
 {
    free(list);//freeing memory before exiting//
 }

 for (int i = 0; i < 3; i++)
 {
    printf("%i\n",tmp[i]);
 }
/*
The issue in the output is due to printing uninitialized 
values in the first loop. When you allocate memory for tmp using malloc,
 it does not guarantee that the memory will be initialized to zero or any specific values. Therefore, 
when you print the values of tmp in the first loop, you are printing uninitialized garbage values.



*/
 tmp[3]=4;

 free(list);//freeing memory of list as now copying list to tmp//
 list=tmp;

 
 
 
 
 
 for (int i = 0; i < 3; i++)
 {
    printf("%i\n",list[i]);
 }
  free(list);
  return 0;



}

