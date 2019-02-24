#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b;
	
	c=a-b;
	
	if(c%10 >=0 && c%10 <9)
	{
		c=c+1;
	}
	else 
	c--;
	
	cout<<endl<<c;
	
	
}
