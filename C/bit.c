#include<stdio.h>

int main()
{
    int a = 1, b = 4, c, d, e, f, g, h;
    c = a & b;
    printf("%d\n",c);
    d = a | b;
    printf("%d\n",d);
    e = a ^ b;
    printf("%d\n",e);
    f = ~ a;
    printf("%d\n",f);    
    g = (a << 4);
    printf("%d\n",g);    
    h = (a >> 4);
    printf("%d\n",h);    

    
    return 0;

}