#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the year";
	cin>>n;
	if(n%4==0||n%400==0&&n%100!=0)
	cout<<"year is leap year";
	
}
