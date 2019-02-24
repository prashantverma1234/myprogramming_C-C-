#include<iostream>
using namespace std;

void count_sort(int a[],int n,int b[],int max)
{
	int c[max];
	
	for(int i=0;i<=max;i++)
	c[i]=0;
	
	for(int j=0;j<n;j++)
	c[a[j]]=c[a[j]]+1;
	
	for(int j=1;j<=max;j++)
	c[j]=c[j]+c[j-1];
	
		for(int j=n-1;j>=0;j--)
		{
			b[c[a[j]]-1]=a[j];
			c[a[j]]=c[a[j]]-1;
		}
}

main()
{
	int n,i;
	cin>>n;
	int a[n],max,b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	max=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	
	count_sort(a,n,b,max);
	
	for(int i=0;i<n;i++)
	    cout<<b[i]<<" ";
	
}
