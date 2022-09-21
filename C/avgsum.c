#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    float avg =0;

    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
           printf("%d   ",a[i][j]);
        }
    }

    
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            sum=sum + a[i][j];
        }
    }
    printf("\nSum of arr is %d",sum);
    avg = sum/9;
    printf("\nAverage of arry is %.2f",avg);
     return 0;
}