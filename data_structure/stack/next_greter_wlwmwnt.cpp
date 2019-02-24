#include<iostream>
#include<stack>
using namespace std;
stack<int>s;

main()
{
	int n;
	cout<<"enter the number of element";
	cin>>n;
	cout<<"enter the elements";
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"next greter element are:";
	s.push(a[0]);
	int next,temp;
	for(int i=1;i<n;i++)
	{
		next=a[i];
		while(next > s.top())
		{
			
			temp=s.top();
			s.pop();
			cout<<endl;
			cout<<temp<<" ==>> "<<next;
			if(s.empty())
			{
				s.push(next);
				break;
			}
		}
		if(next<s.top())
		s.push(next);
	}
	while(!(s.empty()))
	{
		temp=s.top();
		s.pop();
		cout<<endl<<temp<<" ==>> -1";
	}
}
