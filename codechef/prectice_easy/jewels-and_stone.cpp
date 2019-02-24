
#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	char j1[110],s[110];
	int c=0;
	cin>>j1>>s;
	
	for(int j=0;s[j]!='\0';j++)
	{
		for(int k=0;j1[k]!='\0';k++)
		{
			if(s[j]==j1[k])
			{
				j1[k]=-1001;
				c++;
				break;
			}
		}
	}
	cout<<c<<endl;
    }
}
