#include<stdio.h>

int main()
{
    int r,c;
    printf("enter no of rows: ");
    scanf("%d",&r);
    printf("enter no of col; ");
    scanf("%d",&c);
    int m[r][c], n[r][c], s[r][c];
   
    printf("enter first matrix\n");


    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }

      printf("enter second matrix\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&n[i][j]);
        }
        
    }

    printf("sum of matrix is");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            s[i][j]=m[i][j]+n[i][j];
        }
        
    }
    
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ",s[i][j]);
        }
        printf("\n");
    }

    

    
    return 0;
}