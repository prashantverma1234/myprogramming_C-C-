
#include<stdio.h>
main()
{
	int i,j,n,a[10],temp,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{   
	    min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
              min=j;
		}
		
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
}
