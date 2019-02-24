

#include<iostream>
#include<algorithm>

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
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]==0)
			cout<<a[i]<<endl;
			
			else if((a[i]-a[i-1])>1 && i==n-1)
			cout<<a[i]<<endl;
			
			else if((a[i]-a[i-1])>1 && i!=n)
			cout<<a[i-1]<<endl;
		
			
			
			
		}
	}
}
