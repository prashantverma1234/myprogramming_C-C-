#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int inversion=0,L_inversion=0;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				inversion++;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			L_inversion++;
		}
		
		if(inversion==L_inversion)
		cout<<"YES";
		else
		cout<<"NO";
		
		cout<<endl;
	}
}
