#include<stdio.h>
#include "cs50.h"

int get_size(void);
void print_grid(int n);

int main(void)
//void is used here as no input parametrers
{
    int n=get_size();
    //int get_size(); can't use as this assign the int value from get_size here using =
    print_grid(n);

}

/*

    void print_grid(int n): This function is declared with a return type of void,
    which means it doesn't return any value. 
    It's designed to print a grid and doesn't need to provide any result back to the calling code.

    int get_size(void): This function is declared with a return type of int, 
    indicating that it will return an integer value. 
    In this case, the function is responsible for obtaining an integer size from the user, 
    and the returned value is the size that the user entered.




*/

int get_size(void)
//int is used here as i wnat to retutn integer value
{
    int n;
    do
    {
        n = get_int("Size:");
    }
    while(n<1);
    

}

void print_grid(int n)
//doesn't need to be n can be different
{
    for (int i = 0; i <n; i++)
    {
    for (int j = 0; j <n; j++)
    {
        printf("#");
    }
    printf("\n");
    
    }
    
}



