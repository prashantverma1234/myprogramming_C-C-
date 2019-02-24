#include<stdio.h>
int sum(int n,int s );
main()
{
	int n,m,s=0;
	printf("enter the number\n");
	scanf("%d",&n);
	m=sum(n,s);
	printf("%d",m);

	
}
int sum(int n,int s)
{
	int a;
	a=n%10;
	n=n/10;
	s=s+a;
	if(n!=0)
	sum(n,s);
	else
	return s;	
}

