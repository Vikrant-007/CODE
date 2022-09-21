#include<stdio.h>
int main()
{
    int a,x=0;
    printf("Enter three digit number: ");
    scanf("%d",&a);
    printf("Reverse of the number is: ");
    for ( a; a != 0; a/=10)
    {
        x=a%10;
        printf("%d",x);
    }
    
}