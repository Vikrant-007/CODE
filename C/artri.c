#include<stdio.h>
#include<math.h>

float ar(float a,float b,float c)
{
    float s;
    float p;
    s=(a+b+c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    return(p);
}

void main()
{
    float x,y,z;
    printf("enter 3 sides of triangle  ");
    scanf("%f %f %f",&x,&y,&z);
    float area = ar(x,y,z);
    printf("area is %f",area);
}