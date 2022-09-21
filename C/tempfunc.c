#include<stdio.h>

float temp(float x)
{
    float c;
    c=((x-32)*5)/9;
    return(c);
     
}
void main()
{
    float f;
    printf("enter temp in fahrenheit  ");
    scanf("%f",&f);
    float Temp = temp(f);
    printf("temp is celcius is %f",Temp);
}