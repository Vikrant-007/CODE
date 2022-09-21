#include<stdio.h>

int main()
{
    float sal,tax=1;
    printf("Enter salary: ");
    scanf("%f",&sal);
    

    if (sal<250000)
    {
        tax = 0;
    }
    else if (sal >= 250000 && sal < 500000)
    {
        tax = (sal-250000)*0.05;
    }
    else if (sal >= 500000 && sal < 1000000)
    {
        tax = (sal-500000)*0.20;
    }
    else if (sal >= 1000000)
    {
        tax = (sal-1000000)*0.30;
    }
    

    printf("tax is: %.2f",tax);
    

    return 0;
}