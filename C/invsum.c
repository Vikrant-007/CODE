#include<stdio.h>
int main()
{
	int n,i=1;
	float sum;
	sum=0.0;

	printf("enter the value of n");
	scanf("%d",&n);

	while (i<=n)
	{
		sum = sum + (float)1/(float)i;
		i++;
	}
	printf("sum is %f",sum);
	return 0;
}


	