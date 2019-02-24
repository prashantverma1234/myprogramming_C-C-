#include<iostream>
using namespace std;

int reu(int i)
{
	if(i>11)
	{
	i=reu(i/2) + reu(i/3) + reu(i/4);
	reu(i);
    }
	
	
}
main()
{
	int i=50;
	if(i>11)
	reu(i);
	
	cout<<i;
}
