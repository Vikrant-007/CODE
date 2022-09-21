#include<stdio.h>

void call(int *a)
{
    *a *= *a;
    printf("%d",*a);
}

int main()
{
    int n=10;
    call(&n);
}