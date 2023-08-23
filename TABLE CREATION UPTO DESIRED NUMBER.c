#include<stdio.h>
int main()
{
	int n,m,i;
	printf("Enter n  value:\n");
	scanf("%d",&n);
	printf("Enter  m value:\n");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("%d X %d = %d\n",i,n,i*n);
	}
	return 0;
}
