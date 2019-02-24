
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n],one=0,k=1,zero=0,k1=0,B=0,gap=1,f=0,k2=1,m;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=k;j<n;j++)
			{
				if(a[i][j]==1)
				one++;
				
				if(a[j][i]==1)
			    one++;
			}
			k++;
		}
		
		for(int i=0;i<n;i++)
		{
			if(a[i][i]==0)
			zero++;
		}
	
		if(one<=zero)
		{
			cout<<B<<endl;
		}
		else
		{
		
	
			for(int m=1;m<n;m++)
			{
				for(int i=k2;i<n;i++)
				{
					if(a[i][i-gap]==1)
					one--;
					else
					zero++;
					
					if(a[i-gap][i]==1)
					one--;
					else
					zero++;
				}
				
				B++;
				if(one<=zero)
				{
					cout<<B<<endl;
					break;
				}
				k2++;
				gap++;
				
			}
		
	 }
	   
	}
}
