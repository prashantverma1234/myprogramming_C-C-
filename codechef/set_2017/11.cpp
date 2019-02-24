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
		int a[n],ind,min=1000000000;
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		for(int i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				ind=i+1;
			}
		}
		
		cout<<ind<<endl;
		
	}
}
