
#include<stdio.h>
int hello(int a[])
{
	int i=0,n;
	while(a[i]!=NULL)
	{
		i++;
	}
	return i;
}
main()
{
	int n,b,i;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	b=hello(a);
	printf("%d",b);
	
	
}
