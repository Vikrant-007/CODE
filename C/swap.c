#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two integers: ");
    scanf("%d %d",&a,&b);
    printf("\nOriginal integers are: %d  %d",a,b);
    a = a+b - (b=a);
    printf("\nIntegers after swapping: %d  %d",a,b);
    return 0;
    
}