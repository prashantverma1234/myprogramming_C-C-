#include<iostream>
using namespace std;
void binary(int n,int i,int a[])
{
	a[i]=n%2;
	n=n/2;
	i++;
	if(n!=0)
	binary(n,i,a);
	else
	{
			for(int j=i-1;j>=i;j--)
	         cout<<a[j];
	}
}
main()
{
	int n,i=0,a[25];
	cout<<"enter the number";
	cin>>n;
	binary(n,i,a);
	
}
