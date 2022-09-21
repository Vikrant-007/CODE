#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *arr;
    arr =(int *)malloc(5*sizeof(int));
    
    for (int i = 0; i < 5; i++)
    {
        
        scanf("%d",&arr[i]);
    }
    
    printf("output \n");

    for (int i = 0; i < 5; i++)
    {
        
        printf("%d\n",arr[i]);
    }
    
    
    free(arr);

    return 0;
}