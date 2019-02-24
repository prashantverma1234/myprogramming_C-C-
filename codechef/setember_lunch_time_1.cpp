

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	   long long int a,b,c,d,sum=0;
		cin>>a>>b>>c>>d;

		for( long long int j=a;j<=b;j++)
		{
			for( long long int k=c;k<=d;k++)
			{
				if(j<d)
				{
					sum=(d-j) + sum;
					break;
				}
				else 
				sum++;
			}
		}
		cout<<sum<<endl; 
	}
}
