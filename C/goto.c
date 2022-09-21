#include<stdio.h>
int main()
{
    int a,b;
    printf("enter vlues of a and b");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    goto xyz;
    else 
    goto abc;
    xyz:
    printf("A is greater");
    abc:
    printf("B is greater");
    return 0;
}