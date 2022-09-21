#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    float height;
    
}s1;

int main()
{
    
    s1.age = 22;
    s1.height = 2.7;
    strcpy(s1.name, "tom");

    printf("name of student is %s \nage of student is %d\nheight of student is %f\n",s1.name,s1.age,s1.height);
    printf("size of %d",sizeof(s1));
}