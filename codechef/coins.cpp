

#include<iostream>
using namespace std;

long long int array[1000001];

long long int coin(long long int n)
{
	if(n<=1000000)
    return array[n];
    else
	return (coin(n/2) + coin(n/3) + coin(n/4));
}

main()
{
	
	for(int i=0;i<10;i++)
	{

    long long int n,a;
	cin>>n;
	
	for(int j=0;j<=11;j++)
	array[j]=j;
	
	for(int j=12;j<=1000000;j++)
	array[j]=(array[j/2]+array[j/3]+array[j/4]);
	
	a=coin(n);
	
	cout<<a<<endl;
	
    }
}

