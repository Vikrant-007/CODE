//area of circle rec and triangle
#include<stdio.h>
int main()
{
    int a;
    float r,b,h,area;
    printf("1. Calculate area of circle \n2.Calculate area of rectrangle \n3.Calculate area of triangle\n");
    printf("Select the shape: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Enter radius of circle\n");
        scanf("%f",&r);
        area=(3.14*r*r);
        printf("area is %f",area);
        break;
    case 2:
        printf("Enter base and height of rectangale\n");
        scanf("%f %f",&b,&h);
        area=b*h;
        printf("area is %f ",area);
        break;
    case 3:
        printf("Enter base and height of triangle\n");
        scanf("%f %f",&b,&h);
        area=0.5*b*h;
        printf("area is %f",area);
        break;
    
    default:
        break;
    }
    return 0;
}