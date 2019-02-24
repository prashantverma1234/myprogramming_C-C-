#include<iostream>
using namespace std;

int top=-1;

void push(int x,int a[])
{
	top++;
	a[top]=x;
	for(int j=0;j<=top;j++)
	cout<<a[j]<<" ";
	cout<<endl;
}
void pop(int a[])
{
if(top==-1)
cout<<"queue is empty"<<endl;
else
{
top--;
	for(int j=0;j<=top;j++)
	cout<<a[j]<<" ";
	cout<<endl;
}
} 

int top2()
{
return top;	
}

main()
{
	int top;
	int a[11];
	string s;
	char c='y';
	while(c=='y')
	{
		cout<<"enter the operation"<<endl;
		cin>>s;
		if(s=="push")
		{
			cout<<"enter the element ";
			int x;
			cin>>x;
			push(x,a);
		}
		else if(s=="pop")
		pop(a);
		else if(s=="top")
		cout<<a[top2()]<<endl;
		else
		c='n';
	}
}
