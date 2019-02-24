#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		 
		if(n%2==0)
		{
			for(int i=0;i<n;i=i+2)
			{
				a[i]=i+2;
				a[i+1]=i+1;
			}
		}
		else
		{
			
			for(int i=0;i<n-1;i=i+2)
			{
				a[i]=i+2;
				a[i+1]=i+1;
			}
		
			a[n-1]=n-2;
			a[n-2]=n;
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
