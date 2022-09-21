#include<stdio.h>
int main()
{
    int a[3][3], sum=0, i, j;
    printf("enter the matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix is");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
           printf("%d   ",a[i][j]);
        }
    }

    
    for ( j = 0 ,i = 0; i < 3; i++)
    {
        
            sum=sum + a[i][j];

    }
    printf("\nSum of 1st column is %d",sum);

    sum = 0;

   for ( j = 1 ,i = 0; i < 3; i++)
    {
        
            sum=sum + a[i][j];

    }
    printf("\nSum of 2nd column is %d",sum);

    sum = 0;

   for ( j = 2 ,i = 0; i < 3; i++)
    {
        
            sum=sum + a[i][j];

    }
    printf("\nSum of 3nd column is %d",sum);
    
    return 0;
}