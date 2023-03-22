#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    printf("\nUsing Bubble sort\n\n");
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++)
    {
        int count = 0;
        printf("Pass#%d:", i + 1);
        for (j = 0; j < n - i - 1; j++)
        {
            
            if (arr[j] > arr[j + 1])
            { // then swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
          
        }
        printf(" %d\n", count);
    }
}

int main()
{

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;
    bubbleSort(arr, 9);

    return 0;
}