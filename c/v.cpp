
#include<iostream>
using namespace std;
int fact(int s)
{
	int s1=1;
	for(int k=1;k<=s;k++)
	{
	s1=s1*k;
	s1=s1%1000000007;
    }
	return s1;
}
main()
{
	int t,n,a[1001];
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int sum=0,s=0,temp;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]>0)
			sum=sum+a[j];
			s++;
		}
		cout<<sum;
		cout<<endl<<fact(s)<<endl;
		for(int k1=0;k1<n;k1++)
		{
			for(int k2=0;k2<n-1;k2++)
			{
				if(a[k2]>a[k2+1])
				{
					temp=a[k2];
					a[k2]=a[k2+1];
					a[k2+1]=temp;
				}
			}
		}
		for(int k1=0;k1<n;k1++)
		cout<<a[k1]<<" ";
		}
}
