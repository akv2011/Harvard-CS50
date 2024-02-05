#include<stdio.h>
#include "cs50.h"

#include<string.h>

typedef struct
{
    string name;
    string numbers;
}
person;

int main(void)
{
person people[2];
 people[0].name="Arun";
 people[0].numbers="541545454";

 people[1].name="Kumar";
 people[1].numbers="5465465445";

 string n=get_string("Enter name:\n");


 for (int i = 0; i <2; i++)

 {
    if (strcmp(people[i].name,n))

    {
        printf("Found: %s\n",people[i].numbers);
        return 0;

    }  
 }
 printf("Not found:\n");
 

}
