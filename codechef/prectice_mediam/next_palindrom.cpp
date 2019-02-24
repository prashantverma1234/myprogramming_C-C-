
#include<iostream>
#include<cstring>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		bool flag;
		cin>>s;
		int len = s.length();
		mid = len/2-1;
		for(int i=0;i<=mid;i++)
		{
			s[n-i+1]=s[i];
			flag = (s[i]>=(s[n-i+1]));
		}

	}
}
