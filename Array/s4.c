#include <stdio.h>
#include "cs50.h"

int N = 3;
int Y = 4;

float average(int array[], int size);

int main(void)
{
    int Score[N];
    for (int i = 0; i < N; i++)
    {
        Score[i] = get_int("Score is:\n");
    }
    printf("Average: %f\n", average(Score, N));

    int Score2[Y];
    for (int i = 0; i < Y; i++)
    {
        Score2[i] = get_int("Score2 is:\n");
    }
    printf("Average: %f\n", average(Score2, Y));
}

float average(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float)size;
}
