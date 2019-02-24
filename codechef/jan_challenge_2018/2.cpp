
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
		int a[n][n],i,j;
		
		long long int sum=0,temp=0,k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		
		temp=a[n-1][n-1];
		sum=temp;
		for(i=n-2;i>=0;i--)
		{
			for(j=n-1;j>=0;j--)
			{
				if(a[i][j]<temp)
				{  
					temp=a[i][j];
					sum=sum+temp;
					break;
				}
				else
				{
					if(j==0)
					{
						k=1;
						cout<<"-1"<<endl;
						break;
					}
				}
				
			}
			if(k==1)
			break;
			
			
		}
		if(k!=1)
		cout<<sum<<endl;
		
	}
}
