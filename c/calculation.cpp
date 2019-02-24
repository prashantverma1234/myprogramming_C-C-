#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,x,sum,s1,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		s1=x;
		for(j=1;j<=x;j++)
		{
			s=pow(j,s1);
			s1--;
			sum=sum*s;
		}
		printf("\n%d",sum);
		
	}
	
}
