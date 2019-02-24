

#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		int x1=0,x=0,j=0;
		cin>>s;
		while(s[j]!='\0')
		{
			if(s[j]=='a')
			x++;
			else
			x1++;
			j++;
		}
		if(x>x1)
		cout<<x1;
		else
		cout<<x;
	}
}
