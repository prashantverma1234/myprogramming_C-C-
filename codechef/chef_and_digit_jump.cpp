



#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,sum=0;
	string s;
	cin>>s;
	n=s.length();
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=i+1;j--)
		{
			if(s[i]==s[j])
			{
			sum++;
			i=j;
			break;
		    }
		}
		sum++;
	}
	cout<<sum-1<<endl;
}}
