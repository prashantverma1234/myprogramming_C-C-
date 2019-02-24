
                                        // implimentetion queue using stack;

#include<iostream>
#include<stack>
using namespace std;
stack<int>s1;
stack<int>s2;
void enqueue(int x)
{ 
	s1.push(x);
}
void dequeue()
{
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}
	s2.pop();
	while(!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
}

void print()
{ 
    if(s1.empty())
    cout<<"list is empty";
    else
    {
    	cout<<"list is ";
    while(!s1.empty())
    {
	s2.push(s1.top());
	s1.pop();
    }
    while(!s2.empty())
    {
    	cout<<" ";
    	cout<<s2.top();
    	s1.push(s2.top());
    	s2.pop();
	}
    }
}
main()
{
	while(1)
	{
		int x;
	cout<<endl<<"enter the operation"<<endl;
    string s;
    cin>>s;
    if(s=="enqueue")
    {
    	cout<<"enter the data";
    	cin>>x;
    enqueue(x);
    }
    else if(s=="dequeue")
    dequeue();
    else if(s=="print")
     print();
    else if(s=="help")
    {
    	cout<<"enqueue"<<endl;
    	cout<<"dequeue"<<endl;
    	cout<<"print"<<endl;
	}
	else
	break;
    }
}
