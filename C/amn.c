#include<stdio.h>
#include<math.h>

int main()
{
    int n,c=0,r,a;
    float s;
    printf("Enter the number:  ");
    scanf("%d",&n);
    a=n;
    for(a = n;a != 0;++c)
    {
        a/=10;
    }
    
    for (a=n;a != 0; a /= 10)
    {
        r = a%10;
        s += pow(r,c);
    }
    
    if((int)s==n)
    {
        printf("%d is an amstrong number.",n);
    }
    else
    {
        printf("%d is not an amnstrong number.",n);
    }
    
    return 0;
}