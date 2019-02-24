#include<stdio.h>
void fabonacci(int n,int x,int y,int z)
{
	x=y;
	y=z;
	z=x+y;
	printf("%d ",z);
	if(n>1)
	{
		n--;
		fabonacci(n,x,y,z);
	}
}
main()
{
	int x=0,y=1,z=0,n;
	printf("enter the number");
	scanf("%d",&n);
	fabonacci(n,x,y,z);
}
