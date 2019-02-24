#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		int a[n],l1=0,pay=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int l=0;l<n;l++)
		{
			
			if(a[l]==0)
			break;
			
			l1++;
		}
		
		
		for(int i=l1;i<n;i++)
		{
			if(a[i]==0)
			pay=pay+1100;
			else
			pay=pay+100;
		}
		
		cout<<pay<<endl;
	}
	
}
