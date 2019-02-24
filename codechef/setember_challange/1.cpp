
#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string d;
		int j=0,a=0,a1=0;
		cout<<endl;
		cin>>d;
		while(d[j]!=NULL)
		{
			if(d[j]=='0')
			a++;
			else
			a1++;
		
			j++;
		}

		if(a==1 || a1==1)
		cout<<"Yes";
		else
		cout<<"No";


	}
}
