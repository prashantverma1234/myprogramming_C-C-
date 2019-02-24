

#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	cout<<endl;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n],s=0,p=0,p1=0,p2=0;
		
		for(int j=0;j<n;j++)
		{
		
			cin>>a[j];
		    s=s+a[j];
		    if(a[j]==5)
		    p1=1;
		    
		    if(a[j]==2)
		    p=1;
		    
		}
		
		if(s/n<4)
		p2=1;
		
		if(p1==0 || p==1 || p2==1)
		cout<<"No"<<endl;
		
		else
		cout<<"Yes"<<endl;
		
	}
}

