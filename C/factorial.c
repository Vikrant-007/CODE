#include<stdio.h>

int main()
{
    int n,f = 1;
    printf("enter any number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("Factorial is: %d",f);
    return 0;
}