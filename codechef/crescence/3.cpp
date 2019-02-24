
#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n],max=0,lmax=0,rmax=0,tsum=0,sum;
		for(int j=0;j<n;j++)
		{
		cin>>a[j];
		if(max<a[j])
		max=a[j];
	    }
		
		lmax=a[0];
		if(n>2)
	   {
	    if(max!=a[0] && max!=a[1])
	    rmax=max;
	    else
	    {
	    	for(int k=2;k<n;k++)
	    	{
	    		if(rmax<a[k])
	    		rmax=a[k];
			}
		}
		
		for(int k=1;k<n-1;k++)
		{
			if(lmax<rmax)
			sum=lmax-a[k];
			else
			sum=rmax-a[k];
			
			if(sum<0)
			sum=0;
			
			tsum=tsum+sum;
			
			if(lmax<a[k])
			lmax=a[k];
			
			if(a[k+1]==rmax)
			{    
			     rmax=0;
				for(int k1=k+2;k1<n;k1++)
				{
					if(rmax<a[k1])
					rmax=a[k1];
				}
			}
			
			
		} 
		
		cout<<tsum<<endl;  
		
	  }
	  else
	  cout<<"0"<<endl;
	}
}
