#include<stdio.h>
int main()
{
    int a1[3][3],a2[3][3],a3[3][3];

    printf("enter 1st matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a1[i][j]);
        }
        
    }

    printf("enter 2nd matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a2[i][j]);
        }
        
    }
    

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           a3[i][j] = a1[i][0]*a2[0][j] + a1[i][1]*a2[1][j] + a1[i][2]*a2[2][j];
        }
       
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}