#include<stdio.h>

int main()
{
    int n, s = 0;
    printf("enter any number: ");
    scanf("%d",&n);
    for (int i = n; i > 0; i /= 10)
    {
        s += i%10;
    }
    printf("sum is: %d",s);

    return 0;
}