#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {10,15,1,5,8,6,3,5,7,152}, i, j, index_Of_Min_Elelment, temp;
    for (i=0; i<SIZE; i++)
    {
        printf("%4i",arr[i]);
    }

    for (i=0; i<SIZE-1; i++)
    {
        index_Of_Min_Elelment = i;
        for (j=i+1; j<SIZE; j++)
        {
            if (arr [j] < arr [index_Of_Min_Elelment])
            {
                index_Of_Min_Elelment = j;
            }
        }

        temp = arr[i];
        arr [i] = arr [index_Of_Min_Elelment];
        arr [index_Of_Min_Elelment] = temp;

    }

    printf("\n");

    for (i=0; i<SIZE; i++)
    {
        printf("%4i",arr[i]);
    }

    return 0;
}
