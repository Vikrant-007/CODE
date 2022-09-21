#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);

    switch (x%2)
    {
    case 0:
        printf("%d is even number.",x);
        break;
    case 1:
        printf("%d is odd number.",x);
        break;
    
    default:
        printf("Invalid input");
        break;
    }
}