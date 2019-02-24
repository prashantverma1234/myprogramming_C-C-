

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int n,b,m,k,a;
		cin>>n>>b;
		
		m=n-b;
		k=b;
		a=m/k;
		long long int max=0,a1,re;
		            
					a1=(a+k)/2;
					if(a%2==0 && k%2!=0)
					max=a1*(a1+1);
					else if(a%2!=0 && k%2==0)
					max=a1*(a1+1);
					else
					{
						max=a1*a1;
					}
					re=a-a1;
		
		if(n<2*b && n>b)
		cout<<n-b<<endl;
		
		else
		{
			if(n<=b)
			cout<<"0"<<endl;
			else if(b==1)
			{
			       
				cout<<max<<endl;
				
			}
			else
			{
				max=max+b+re;
				cout<<max<<endl;		
			}
		}
	 
	}
}
