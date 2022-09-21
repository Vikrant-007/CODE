#include<stdio.h>
int main()
{
    int n,f = 0;
    printf("Enter a non zero number: ");
    scanf("%d",&n);
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
        
    }
    if (n==1)
    {
        printf("1 is a composite number");
    }
    else
    {
        if (f==0)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is a non-prime number",n);
        }
    }
    return 0;
}
