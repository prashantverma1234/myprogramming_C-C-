

#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int m,n,j,k;
		cout<<endl;
		cin>>m>>n;
		
		for(int k=m;k<=n;k++)
		{
			if(k==2)
				cout<<k<<endl;
	
			j=2;
			while(j<=k/2 +1)
			{
			  	if(k%j==0)
			  	break;
			  	else
			  	j++;
			  	
			  	if(j==k/2 +2)
			  	cout<<k<<endl;
			}
		}
	       
		
	}
}
