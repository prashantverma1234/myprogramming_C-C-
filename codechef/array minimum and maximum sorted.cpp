
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the size of arry";
	cin>>n;
	int a[n],i,k,j,temp,b[n],z;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	z=0;
	for(i=0;i<n;i++)
	{
		b[i]=a[z];
		z++;
	}
	z=0;
	for(i=0;i<n;i=i+2)
	{
		a[i]=b[z];
		z++;
	}
	z=n-1;
	for(i=1;i<n;i=i+2)
	{
		a[i]=b[z];
		z--;
	}
	
	
	
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	
}



