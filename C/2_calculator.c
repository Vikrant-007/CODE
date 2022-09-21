#include<stdio.h>

int main()
{
    float a,b;
    char op;

    printf("enter 1st number: \n");
    scanf("%f",&a);
    printf("enter operator: \n");
    scanf(" %c",&op);
    printf("enter 2nd number: \n");
    scanf("%f",&b);
    
    

    if (op=='+')
    {
        printf("%.2f",a+b);
    }
    else if (op=='-')
    {
        printf("%.2f",a-b);
    }
    else if (op=='/')
    {
        printf("%.2f",a/b);
    }
    else if (op=='*')
    {
        printf("%.2f",a+b);
    }
    else
    {
        printf("error");
    }

}