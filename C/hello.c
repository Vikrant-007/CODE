#include<stdio.h>
int main(){
    int age_1 , age_2;
    printf("enter first age\n");
    scanf("%d",&age_1);
    printf("enter second age\n");
    scanf("%d",&age_2);
    if(age_1>age_2)
    printf("you are older");
    else
    printf("you are younger");
    
    return 0;
}