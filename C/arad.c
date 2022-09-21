#include<stdio.h>
int main()
{
    int a[10],n;
    printf("Enter the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to find: ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        if (a[i]==n)
        {
           printf("%d is at A[%d]",n,i);
           break;
        }
        
    }
    printf("no is not in the array.");
    return 0;
}