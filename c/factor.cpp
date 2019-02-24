#include<stdio.h>
main()
{
	int n,i=2,a;
	printf("enter the numbers");
	scanf("%d",&n);
	if(n==1)
	printf("%d",n); 
	while(n!=1)
	{
		if(n%i==0)
		{
		printf("%d ",i);
		n=n/i;
	    }
		else
		i++;
}}
