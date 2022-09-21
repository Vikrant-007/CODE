#include<stdio.h>

int main()
{
    int n ,s=0;
    printf("enter no of rows: ");
    scanf("%d",&n);
    while(n > 0)
    {
        s=0;
        for (n; n > 0; n /= 10)
        {
            s += n%10;
        }
        if (s>9)
        {
            n=s;
        }
        
        
    }
    printf("sum is: %d ",s);
    return 0;
}