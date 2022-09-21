#include<stdio.h>
int main()
{
    int a[10];
    printf("enter array elements");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray is\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",a[i]);
    }
}