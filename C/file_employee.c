#include <stdio.h>

int main()
{
    FILE *fp = fopen("employee.txt","a");
    fputs("vikrant,student\nshivam,student\nkunal,student\n",fp);
    int ch = getc(fp);
    int num = 435;
    fprintf(fp,"%d",num);
    
    // while (ch != EOF)
    // {
    //     putchar(ch);
    //     ch = getc(fp);
    // }
    
    
    fclose(fp);
    
    return 0;
}