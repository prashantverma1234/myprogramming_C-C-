

#include<iostream>
using namespace std;
main()
{
	int n,k;
	cin>>n>>k;
	int c=0,a[n+1]={0};
	for(int i=0;i<k;i++)
	{
		int x;
		string s;
		cin>>s;
		if(s=="CLOSEALL")
		{
		for(int l=0;l<=n;l++)
		a[l]=0;
		
		c=0;
	    }
		else
		{
		cin>>x;

		if(a[x]==0)
		{  
			a[x]=1;
			c++;
		}
		else
		{
		a[x]=0;
		c--;
	    }
	    
	    }
	   	
	   cout<<c<<endl;
	}
	
	
}
