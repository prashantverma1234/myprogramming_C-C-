#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack<char>s;
main()
{
	int x;
	cout<<"how many character your name";
	cin>>x;
	if(x>10)
	cout<<"enter the string less then 10 characters";
	else
	{
	char name[10]; 
	for(int i=0;i<x;i++)
	{
		cin>>name[i];
		s.push(name[i]);
	}
	for(int i=0;i<x;i++)
	{
		name[i]=s.top();
		s.pop();
	}
	cout<<endl<<name;
}}
