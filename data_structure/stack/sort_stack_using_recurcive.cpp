#include<iostream>
#include<stack>
using namespace std;
stack<int>s;
	
void sorted_element(int temp)
	{
		int temp1;
		if(s.empty() || temp<s.top())
		s.push(temp);
		else
		{
			temp1=s.top();
			s.pop();
			sorted_element(temp);
			s.push(temp1);
		}
	}
void sort()
	{
		int temp;
		if(!(s.empty()))
		{
			temp=s.top();
			s.pop();
			sort();
			sorted_element(temp);
		}
	}

main()
{
	int n,temp2;
	cout<<"how many numbers you want to sort";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>temp2;
    s.push(temp2);
	}
	
	sort();
	
	cout<<"sorted_list ";
	for(int i=0;i<n;i++)
	{
		temp2=s.top();
		s.pop();
		cout<<temp2<<" ";
	}
	
}
