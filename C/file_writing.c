#include <stdio.h>

int main()
{
    FILE *fp = fopen("vicky.txt","w");
    char p[20];
    fgets(p,sizeof(p),stdin);

    fprintf(fp,"%s",p);
    

    fclose(fp);
    return 0;
}