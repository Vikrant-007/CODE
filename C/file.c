#include<stdio.h>

int main()
{

    FILE *fp;
    fp = fopen("hello.txt","r");
    fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));

    fclose(fp);
    return 0;

}