
#include<stdio.h>
int len(int a[])
{
	int n;
	n=sizeof(a);
	printf("%d",n);
}
main()
{
	
	int n,b,i;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	len(a);
	
}
