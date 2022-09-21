#include<stdio.h>
int main()
{
    int a[5][5];

    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("enter value for a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("two dimensional array elements:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\n");
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    
     return 0;
}