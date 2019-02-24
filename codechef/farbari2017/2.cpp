

#include<iostream>
#include<algorithm>
using namespace std;

main()
{
	long long int n,l,r;
	cin>>n>>l>>r;
	
	
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	long long int res=0;
	for(long long int i=l;i<=r;i++)
	{
		
		if(i < a[0] || i< a[1])
		{
			for(long long int j=0;j<n-1;j++)
			{
				if((a[j]+i)>a[j+1])
				{
					res++;
					break;
				}
				
			}
			
		}
		else
		{
			for(long long int j=n-1;j>0;j--)
			{
				if(i>a[j] && i> a[j-1])
				{
					if((a[j]+a[j-1])>i)
					{
						res++;
						break;
					}
				}
				else if(a[j] >i && a[j]>a[j-1])
				{
					if((a[j-1]+i)>a[j])
					{
						res++;
						break;
					}
				}
				else
				{
					if((a[j]+i)>a[j-1])
					{
						res++;
						break;
					}
				}
				
			   	
			}
		}
		
	}
	
	cout<<res<<endl;
}
