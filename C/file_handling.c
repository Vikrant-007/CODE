#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("hello.txt","w");
    fputs("hello world this is me.",file);
    fseek(file,-9,SEEK_END);
    fputs("sam",file);
    fclose(file);
    
    return 0;
}