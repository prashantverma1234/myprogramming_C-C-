#include<stdio.h>
void factor(int n,int i)
{
	if(n==1)
	printf("%d",n);
	if(n%i==0)
	{
		printf("%d ",i);
		n=n/i;
	}
	else
	i++;
	if(n!=1)
	factor(n,i);
	
}
main()
{
	int n,i=2,a;
	printf("enter the numbers\n");
	scanf("%d",&n);
	factor(n,i);
}
