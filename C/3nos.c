#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
    printf("%d is the greatest number",a);
    }
    
    else if(b>a && b>c)
    {
    printf("%d is the greatest number",b);
    }
    else if(c>b && c>a)
    {
        printf("%d is the greatest number",c);
    }
    else if(a==b||b==c)
    {
        printf("Two or more numbers are equal");
    }
    return 0;
}