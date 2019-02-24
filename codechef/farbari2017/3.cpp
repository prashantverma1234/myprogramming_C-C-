

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		long long int a,n,m;
		cin>>a>>n>>m;
		
		if(a%m==0 || a==m)
		cout<<a%m<<endl;
		else
		{
			long long int i,m1,a1,r,a2;
			a1=a;
			a2=a;
	      long long	int k=1;

			while(a1!=0)
			{
				a1=a1/10;
				
				k=k*10;
			}
			
			for(i=0;i<n;i++)
			{
			   r= a % m;
			   a= r*k + a2;	
			}
			
			cout<<r<<endl;
		}
	}
}
