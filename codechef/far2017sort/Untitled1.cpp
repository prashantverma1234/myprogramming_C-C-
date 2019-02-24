

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	for(int m=0;m<t;m++)
	{
		int n,f=0,i,f2=0,f3=0;
		cin>>n;
		string s;
		
		for(i=0;i<n;i++)
		{
		  cin>>s;
		  if(n==1 && f3==0)
		  {
		  if(s=="cookie")
		  {
		  cout<<"NO"<<endl;
	      }
	      else
	      cout<<"YES"<<endl;
	      f2=1;
	      f3=1;
	     }
	      else
	      {
	      	if(s=="cookie")
	      	f++;
	      	else
	      	f=0;
	      	
	      	if(i==n-1)
	      	{
	      		if(s=="cookie" &&f3==0)
	      		{    f2=1;
	      			cout<<"NO"<<endl;
	      	        f3=1;
				  }
			  }
	      	if((f==2 || f>2) && f3==0)
	      	{
	      		f3=1;
	      		f2=1;
	      	cout<<"NO"<<endl;

	        }
	        
		  }
		  
	    }
	    
	    if(f2==0)
	    cout<<"YES"<<endl;
		
		
		
	}
}
