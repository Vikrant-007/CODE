#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *arr;
    arr =(int *)calloc(5,sizeof(int));
    
    
    printf("output \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    arr = (int *)realloc(arr,sizeof(int)*6);
    arr[6] = 5;
    printf("%d \n",arr[6]);
    free(arr);

    return 0;
}