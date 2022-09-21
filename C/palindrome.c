#include<stdio.h>
#include<string.h>

int main()
{
    int c = 0;
    char ch[20]; 
    
    fgets(ch,sizeof(ch),stdin);
    
    for (int i = 0; i < ((strlen(ch)/2) - 1); i++)
    {
        if (ch[i]!=ch[strlen(ch)-i-2])
        {
            c = 1;
            break;
        }
        
    }

    if (c==0)
    {
        printf("palidrome");
    }
    else
    {
        printf("not palidrome");
    }
    
    

    return 0;
}