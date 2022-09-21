#include<stdio.h>

int main()
{
    float s[3];
    float sum=0;
    char ch[10];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&s[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (s[i]%3 <= 33)
        {
            ch[10] = "fail";
        }
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        sum+=sum;
    }

    if(sum%0.4 <= 120)
    {
        ch[10] ="fail";
    }
    
    printf("%s",ch);

    return 0;
}