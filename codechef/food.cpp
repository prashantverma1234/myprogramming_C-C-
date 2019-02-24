
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	cout<<endl;
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;
		int a[n],i,m=0,l,k,s;
		for(i=0;i<n;i++)
		cin>>a[i];
		
		for(s=0;s<n;s++)
		{
			k=s;
			i=s;
			for(l=0;l<=n;l++)
			{
				i=(a[i]+i+1)%n;
				if(i==k)
				{
				  m++;
				  break;
			    }
			}
		}
		cout<<m;
		cout<<endl;
	}
}
