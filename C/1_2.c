#include<stdio.h>
int main()
{
    int r,h;
    float vol;

    printf("Enter radius of cylinder: ");
    scanf("%d",&r);
    printf("Enter height of cylinder: ");
    scanf("%d",&h);

    vol=3.14*r*r*h;

    printf("Volume  is: %.2f",vol);

    return 0;
}