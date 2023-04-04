#include <stdio.h>

int main()
{
    int arr[] = { -1, 0, 2 };

    if (arr[0] < arr[1] && arr[0] < arr[2]) {
        printf("Min: %d\n", arr[0]);
    }
    else if (arr[1] < arr[0] && arr[1] < arr[2]) {
        printf("min: %d\n", arr[1]);
    }
    else
        printf("min: %d\n", arr[2]);


    if (arr[0] > arr[1] && arr[0] > arr[2]) {
        printf("Max: %d\n", arr[0]);
    }
    else if (arr[1] > arr[0] && arr[1] > arr[2]) {
        printf("Max: %d\n", arr[1]);
    }
    else
        printf("Max: %d\n", arr[2]);
}
