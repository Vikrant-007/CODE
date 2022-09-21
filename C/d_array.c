#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* p;
    int n,big = 0;
    printf("enter size of array: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    printf("enter an  array: ");    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (p[i]>big)
        {
            big = p[i];
        }
        
    }
    printf("%d",big);
    return 0;
}