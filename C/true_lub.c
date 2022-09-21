#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for (int t = 0; t < T; t++)
    {
        char str[20];

        fgets(str,20,stdin);

        int vov[5];

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i]=='a'||str[i]=='A')
            {
                vov[0]=1;
                
            }
            else if (str[i]=='e'||str[i]=='E')
            {
                vov[1]=1;

            }
            else if (str[i]=='i'||str[i]=='I')
            {
                vov[2]=1;
                
            }
            else if (str[i]=='o'||str[i]=='O')
            {
                vov[3]=1;
                
            }
            else if (str[i]=='u'||str[i]=='U')
            {
                vov[4]=1;
               
            }
        
        } 

        int c=0;

        for (int i = 0; i < 5; i++)
        {
            if (vov[i]!=1)
            {
                c = 1;
                
            }
            
        }
        if (c == 1)
        {
            printf("ugly string\n");
        }
        else
        {
            printf("lovely string\n");
        }
        
        
        
    }
    

    return 0;
}