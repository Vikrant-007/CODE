#include<stdio.h>

int main()
{
    int a;
    printf("enter no of day: ");
    scanf("%d",&a);
    
    
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thrusday");
        break;
    case 5:
        printf("firday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("msunday");
        break;
            
    default:
        break;
    }
}
