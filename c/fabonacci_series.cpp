#include<stdio.h>
main()
{
	int x=0,y=1,z=0,i,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		x=y;
		y=z;
		z=x+y;
		printf("%d ",z);
	}
}
