#include <stdio.h>

int main()
{
    int age = 30;
    

    printf("%p\n",&age);      // complete hexadesimal values

    printf("%x\n",&age);      // hexadesimal samll values

    printf("%X\n",&age);      // hexadesimal capital values

    printf("%u\n",&age);      // desimal values
    
    printf("%o\n",&age);      // octal values

    return 0;
}