#include<stdio.h>

int main()
{
    int num,cnum;
    
    printf("enter any no. ");
    scanf("%d",&num);

    printf("check divi. for ");
    scanf("%d",&cnum);

    if (num%cnum == 0)
    {
        printf("number is divisible");
    }
    else
    {
        printf("number is not dividible");
    }

    return 0;
}