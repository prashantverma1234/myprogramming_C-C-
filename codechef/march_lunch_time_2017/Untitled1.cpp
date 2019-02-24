#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,f=0;
		cin>>a>>b;
		
		if(a%2==0)
		{
			if(a!=2)
			{
				if(a-2==b ||a+2==b ||a-1==b)
				{
				f=1;
				cout<<"YES"<<endl;
			    }
			}
			else
			{
				if(b==1||b==4)
				{
				f=1;
				cout<<"YES"<<endl;
			    }
			}
		}
		else
		{
			if(a!=1)
			{
				if(a-2==b||a+2==b||a+1==b)
				{
				f=1;
				cout<<"YES"<<endl;
			    }
			}
			else
			{
			    if(b==3||b==2)
			    {
				f=1;
			    cout<<"YES"<<endl;
			    }
			}
		}
		
		if(f==0)
		cout<<"NO"<<endl;
	}
}
