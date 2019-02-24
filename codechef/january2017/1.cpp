
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int c,d,l,min,k,b;
		cin>>c>>d>>l;
		if(l%4!=0)
		{
			cout<<"no"<<endl;
		}
		else if(l>(c+d)*4)
		{
			cout<<"no"<<endl;
		}
		else if(l<max((d*4),(d*4)+(c-2*d)*4))
		{
			cout<<"no"<<endl;
			
		}
		else
		{
			cout<<"yes"<<endl;
		}
		
	}
}


