#include <stdio.h>

int main()
{
    FILE *fp;

    int num1, num2;

    fp = fopen("vicky.txt", "r");
    if (fp == NULL)
    {
        printf("file doesn't exist");
        
    }
    else
    {
        fscanf(fp,"%d",&num1);
        fscanf(fp,"%d",&num2);
        
        printf("num 1 is: %d\n",num1);
        printf("num 2 is: %d\n",num2);
    }

    fclose(fp);

    return 0;
}