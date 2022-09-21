#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* p;
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    printf("enter an  array: "); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i]>p[j])
            {
                p[j] = p[j] + p[i] - (p[i]=p[j]);
            }
            
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("%d ",p[i]);
    }
    
    return 0;
}