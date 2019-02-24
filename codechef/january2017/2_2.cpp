
#include<iostream>
#include<climits>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int m=0;m<t;m++)
	{
		int n;
		cin>>n;
		int a[n],a1[n][n],p[n],i,j,max,b,c,index;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
	    }		
	    
	    for(i=0;i<n-1;i++)
	    {
	    	cin>>b>>c;
	    	a1[b-1][c-1]=1;
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a1[i][j]==1 || a1[j][i]==1)
				{
					a1[i][i]=1;
					break;
				}
				
			}

		}
			
		
		for(i=0;i<n;i++)
		{
			index=1;
			max=INT_MIN;
			
			for(j=0;j<n;j++)
			{
				
				if(a1[i][j]==1 || a1[j][i]==1)
				continue;
				else
				{
					if(max < a[j])
					{
						index=j+1;
						max=a[j];
					}
				}
			}
			if(max==INT_MIN)
				p[i]=0;
				else
				p[i]=index;
				
		}
		
		for(i=0;i<n;i++)
		cout<<p[i]<<" ";
		
		
		cout<<endl;
	 }
}
