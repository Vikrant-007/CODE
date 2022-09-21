#include <stdio.h>

int main() 
{
    int arr[5],arr2[5];
    printf("Enter array: ");
    for(int i = 0; i < 5; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr2[i]=arr[i];
    }

    printf("Copied arry: ");
    for(int i = 0; i < 5; ++i) 
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}