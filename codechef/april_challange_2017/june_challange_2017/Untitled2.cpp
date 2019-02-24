

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int u,v,sum,res,n;
		cin>>u>>v;
		
		n=u+v;
		sum=(n*(n+1)/2);
	    
	      
	      res=sum+u+1;
	      cout<<res<<endl;
	  }
}
