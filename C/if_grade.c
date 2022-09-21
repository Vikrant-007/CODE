#include<stdio.h>

int main()
{
    int m;
    printf("Enter marks obtain ");
    scanf("%d",&m);

    if (m<=100 && m>90)
    {
        printf("A");
    }
    else if (m<=90 && m>80)
    {
        printf("B");
    }
    else if (m<=80 && m>70)
    {
        printf("C");
    }
    else if (m<=70 && m>60)
    {
        printf("D");
    }
    else if (m<=60)
    {
        printf("F");
    }
    

    return 0;
}