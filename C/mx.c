#include<stdio.h>

int main()
{
    int a,b,c,s=0;
    
    
    printf("enter no of rows for 1st matrix: ");
    scanf("%d",&a);

    printf("enter no of column for 1st matrix: ");
    scanf("%d",&b);

    printf("enter no of columns for 2nd matrix: ");
    scanf("%d",&c);

    int a1[a][b],a2[b][c],a3[a][c];

    printf("enter 1st matrix: ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&a1[i][j]);
        }
        
    }

    printf("enter 2nd matrix: ");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a2[i][j]);
        }
        
    }
    

    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
          for (int k = 0; k < b; k++)
          {
            s = s + a1[i][k]*a2[k][j];
          }
           a3[i][j]=s;
           s=0;
        }
       
    }
    
    printf("product of two matrix is:\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t",a3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}