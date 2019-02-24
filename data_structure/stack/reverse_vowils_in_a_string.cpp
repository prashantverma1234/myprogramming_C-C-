#include<iostream>
#include<stack>
using namespace std;
stack<char>s;
main()
{
	int i;
	string str;
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		s.push(str[i]);
	}
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			str[i]=s.top();
			s.pop();
		}
		cout<<str[i];
	}
}

