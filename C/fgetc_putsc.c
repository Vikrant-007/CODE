#include <stdio.h>

int main()
{
    FILE *fp = fopen("vicky.txt","r");
    char c = fgetc(fp);
    
    while (c != EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
    
    // fp = fopen("vicky.txt","w");
    // putc('c',fp);
    fclose(fp);
    return 0;
}