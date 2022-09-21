#include <stdio.h>
#include<string.h>
int main()
{
    char ch[20];

    scanf("%[^\n]%*c",ch);

    // fgets(ch,sizeof(ch),stdin);
    
    int len = strlen(ch);

    printf("%d\n",len);
    
    ch[len - 1] = '\0';
    printf("%s",ch);
    printf("hello");


    return 0;
}