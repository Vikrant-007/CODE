#include<stdio.h>

int main()
{
    int n;
    
    printf("Eneter any %% int no.: ");
    scanf("%d",&n);
    printf("table of given no. is: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    

    return 0;
}