#include<stdio.h>
int main()
{

    float avg=0,a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&a[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
        avg=avg+(a[i]/5);
    } 
    printf("Average: %.2f",avg);
    return 0;
}