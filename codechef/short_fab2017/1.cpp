
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int a[n],a1[n],sum=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j]>>a1[j];
			if(a[j]<=k)
			{
				k=k-a[j];
				a[j]=0;
			
			}
			else
			{
			a[j]=a[j]-k;
			k=0;
		    }
		}
		
		for(int j=0;j<n;j++)
		{
			sum=sum+a[j]*a1[j];
		}
		
		cout<<sum<<endl;
	}
}
