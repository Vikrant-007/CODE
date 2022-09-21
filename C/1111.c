#include<stdio.h>
#define f(g,g2) g##g2

void main()
{
    int var12=100;
    printf("%d",f(var,12));
}