
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		
		int a[n],c=0,h=0;
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		if(n!=3)
		cout<<"no"<<endl;
		else
		{
			if(a[0] >= p/2)
			c++;
			else if(a[0] <= p/10)
			h++;
			
			if(a[1] >= p/2)
			c++;
			else if(a[1] <= p/10)
			h++;
			
			if(a[2] >= p/2)
			c++;
			else if(a[2] <= p/10)
			h++;
			
			if(c==1 && h==2)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
	}
}
