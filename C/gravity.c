#include<stdio.h>

float force(float m)
{
    float result=m*9.8;
    return(result);
}

int main()
{
    float mass;
    printf("\nenter mass ");
    scanf("%f",&mass);
    printf("force = %f",force(mass));
    return 0;

}