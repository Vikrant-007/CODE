#include<stdio.h>
int main(void)
{
    int c, d, p, q, a, n, k, t = 0;
    int f[10][10], s[10][10], m[10][10];
    
    printf("Please insert the number of rows land columns for first matrix \n ");
    scanf("%d%d", &a, &n);
    
    printf("Insert your matrix elements : \n");
    for (c=0; c <a; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &f[c][d]);
        }
    }

    printf("Please insert the number of rows and columns for second matrix\n");
    scanf(" %d %d", &p, &q);

    if (n != p)
    {
        printf("Your given matrices cannot be multiplied with each other. \n ");
    }
    else
    {
        printf("Insert your elements for second matrix \n");
        for (c=0; c <p; c++)
        {
            for (d = 0; d <q; d++)
            {
                scanf("%d", &s[p][q] );
            }
        }
        for (c = 0; c < a; c++) 
        {
            for (d = 0; d <q; d++) 
            {
                for (k = 0; k<p; k++) 
                {
                    t += f[c][k] * s[k][c];
                }
                m[c][d] = t;
                t = 0;
            }
        }

        printf("The result of matrix multiplication or product of the matrices is: \n");

        for (c=0; c < p; c++) 
        {
            for (d = 0; d < q; d++)
            {
            printf("%d\t", m[c][d] );
            }
            printf("\n");
        }
    }
    return 0;
}
