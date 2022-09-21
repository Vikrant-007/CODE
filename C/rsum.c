#include<stdio.h>
int main()
{
    int a[3][3], i, j;
    static int sum=0;
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

    
    for ( i = 0 ,j = 0; j < 3; j++)
    {
        
            sum=sum + a[i][j];

    }
    printf("\nSum of 1st row is %d",sum);

   

    for ( i = 1 ,j = 0; j < 3; j++)
    {
        
            sum=sum + a[i][j];

    }
    printf("\nSum of 2nd row is %d",sum);

   

    for ( i = 2 ,j = 0; j < 3; j++)
    {
        
            sum=sum + a[i][j];

    }
    printf("\nSum of 3nd row is %d",sum);
    
    return 0;
}