
#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,sum1=0,sum2=0;
		cin>>n;
		
		int a[n],b[n];
		
		for(int j=0;j<n;j++)
		cin>>a[j];
		
		for(int j=0;j<n;j++)
		cin>>b[j];
		
		for(int j=0;j<n;j=j+2)
		{
			sum1=sum1+a[j];		
		}
		
			
		for(int j=1;j<n;j=j+2)
		{
			sum1=sum1+b[j];		
		}
		
			
		for(int j=1;j<n;j=j+2)
		{
			sum2=sum2+a[j];		
		}
		
			
		for(int j=0;j<n;j=j+2)
		{
			sum2=sum2+b[j];		
		}
	
		if(sum1<sum2)
		cout<<sum1<<endl;
		else
		cout<<sum2<<endl;
	}
}
