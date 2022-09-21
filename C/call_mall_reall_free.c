#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    
    arr =(int *)malloc(5*sizeof(int));
    
    printf("output \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

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

    arr =(int *)realloc(5,sizeof(int));
    printf("output \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    free(*arr);
    
   

    return 0;
}