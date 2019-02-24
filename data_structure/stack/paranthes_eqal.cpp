#include<iostream>
#include<stack>
using namespace std;
stack<char>s;
main()
{
string str;
cout<<"enter parenthes";
cin>>str;
for(int i=0;str[i]!='\0';i++)
{
	if(s.empty())
	s.push(str[i]);
	else
	{
	if((s.top()=='{' && str[i]=='}') ||(s.top()=='(' && str[i]==')') ||(s.top()=='['&&str[i]==']'))
	s.pop();
	else if((s.top()=='}' && str[i]=='{') ||(s.top()==')' && str[i]=='(') ||(s.top()==']'&&str[i]=='['))
	s.pop();
	else
	s.push(str[i]);
}
}
if(s.empty())
cout<<"parenthes are eqal";
else
cout<<"parenthes are not  eqal";
}
