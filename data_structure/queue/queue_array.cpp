#include<iostream>
using namespace std;
# define n 5

int a[n],rear=-1,front=-1;

void push(int x)
{
if((rear+1)%n==front)
cout<<"overflow !"<<endl;
else
{
	if(rear==-1)
	{
		rear++;
		front++;
		a[rear]=x;
    }
    else
    {
    	rear=(rear+1)%n;
    	a[rear]=x;
	}
}
}

void pop()
{
	if(front==-1)
	cout<<"underflow !"<<endl;
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=(front+1)%n;
	}
}

main()
{
	string s;
	while(1)
	{
		cin>>s;
		if(s=="push")
		{
			cout<<"enter the number  ";
			int x;
			cin>>x;
			push(x);
		}
		else if(s=="pop")
		{
			pop();
		}
		else if(s=="front")
		{
			
		}
		else if(s=="rear")
		{
			
		}
		else if(s=="print")
		{
			int i=front;
			while(i!=rear)
			{
				cout<<a[i]<<" ";
				i=(i+1)%n;
			}
			cout<<a[i]<<endl;
		}
		else
		break;
	}
}

