#include<stdio.h>

void func(int* a,int b)
{
    *a*=*a;
    b*=b;

}

int main()
{
    int m=5 ,n=7;
    printf("m = %d\nn = %d\n",m,n);
    func(&m,n);
    printf("m = %d\nn = %d\n;",m,n);
}