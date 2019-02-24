#include<iostream>
using namespace std;
main()
{
	
	int n,a[15],i=0,l;
	while(1)
	{
	cout<<endl<<"inter the decimal number"<<endl;
	cin>>n;
	cout<<endl<<"what is base who want to convert"<<endl;
	cin>>l;
	while(n!=0)
	{
		a[i]=n%l;
		n=n/l;
		i++;
	}
	cout<<endl<<"no has converted"<<endl;
	for(int j=i-1;j>=0;j--)
		 cout<<a[j];
		 
    }
		 
}
