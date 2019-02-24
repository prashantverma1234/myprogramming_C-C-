#include<iostream>
using namespace std;
main()
{
	
	 char ch;
	cout<<"enter any character"<<endl;
	cin>>ch;
	if(ch<='z'&&ch>='a')
	cout<<"the charter is small latter"<<endl;
	else if(ch<='Z'&&ch>='A')
	cout<<"the character is captel latter"<<endl;
	else if(ch<='9'&&ch>='0')
	cout<<"the character is digit"<<endl;
	else
	cout<<"the character is specical symbol";
     
}
