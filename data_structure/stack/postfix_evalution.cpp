#include<iostream>
#include<stack>
using namespace std;
stack<char>s;

main()
{
string str;
cin>>str;
int a,b,res;
for(int i=0;str[i]!='\0';i++)
{
	if(str[i]>='0' && str[i]<='9')
	s.push(str[i]);
	else
	{
		if(str[i]=='+')
		{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			res=a+b-'0';
			s.push(res);
		}
		else if(str[i]=='-')
		{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			res=b-a+'0';
			s.push(res);
		}	
		else if(str[i]=='*')
		{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			res=(a-'0')*(b-'0')+'0';
			s.push(res);
		}
		if(str[i]=='/')
		{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			res= (b-'0')/(a-'0')+'0';
			s.push(res);
		}
	}
}
res=s.top()-'0';
cout<<res<<endl;
}
