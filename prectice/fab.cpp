#include<iostream>
using namespace std;
int feb(int n)
{
	if(n<=1)
	return 1;
	else
	return feb(n-1) + feb(n-2);
}
main()
{
	int n,a;
	cin>>n;
	if(n==1)
	cout<<"1";
    if(n>1)
	{
	a=feb(n-1);
	cout<<a;
    }
	else
	return 1;
	
	
}

