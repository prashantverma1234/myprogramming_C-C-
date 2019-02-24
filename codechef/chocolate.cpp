

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int n,m;
		cout<<endl;
		cin>>n>>m;
		
		if(n%2!=0 && m%2!=0)
		cout<<"No";
		
		else
		cout<<"Yes";
	}
}
