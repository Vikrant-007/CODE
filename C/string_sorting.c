#include<stdio.h>
#include<string.h>

void sort(char p[][10], int n)
{
    char temp[10]; 
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(p[i], p[j]) > 0 )
            {
                strcpy(temp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp);
            }
            
        }
        
    }
}

int main()
{
    char names[5][10];
    int n;
    printf("enter total no of names: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("enter %d name: ",i);
        scanf("%s",names[i]);
    }
    sort(names,n);

    printf("sorted names are:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d name: ",i);
        printf("%s\n",names[i]);
    }
    return 0;
}