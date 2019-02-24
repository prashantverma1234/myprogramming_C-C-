

#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cout<<endl;
		long long int n,m,c,l,sum=0;
		cin>>n>>m>>c;
		  
			if(n>c)
			n=c;
			if(m>c)
			m=c;
			
		for(long long int j=n;j>=1;j--)
		{   if(n*m<c)
		    break;
		   
			
			for(long long int k=m;k>=1;k--)
			{   
			    if(j*k>c)
			    {
			    	l=(j*k)/c;
			    	k=k/l;
				}
			
				if(j*k<c) 
				break;
			
				else
				{
				   if(j*k==c)
				   sum++;	
				}
			}
		}
		cout<<sum;
	}
}
