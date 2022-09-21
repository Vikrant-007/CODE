#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two integers: ");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    printf("\nOriginal integers are: %d  %d",a,b);
    
    int temp = *p;
    *p = *q;
    *q = temp;

    printf("\nIntegers after swapping: %d  %d",a,b);
    return 0;
    
}