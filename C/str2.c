#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*2-i*2; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        { 
            printf("* ");
        }
        printf("\n");
    }
    
}