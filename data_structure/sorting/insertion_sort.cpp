
#include<stdio.h>
main()
{
	int i,j,n,a[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
}
