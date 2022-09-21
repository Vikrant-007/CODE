#include<stdio.h>
int main()
{
    int a[5],sum=0;
    printf("Enter the array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]%2==1)
        {
            sum+=a[i];
        }
        
    }
    printf("Sum of odd elements: %d",sum);
    return 0;
}