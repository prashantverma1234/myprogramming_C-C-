
#include<iostream>
#include<string.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    	string s;
    	cout<<endl;
    	cin>>s;
    	
    	int l,j,k,m,b=0,b1=0;
    	float l1;
    	l= s.length()-1;
    	
    	for(j=0;j<=l;j++)
    	{
    		if(s[j]=='.')
    		break;
		}
		l1=l;
		if(j==l1/2)
		s[j]='a';
		else
		s[j]=s[l-j];
		
		m=l;
		for(k=0;k<=l/2;k++)
		{
		   if(s[k]==s[m])
		   	b1=1;
		   	else
		   	b=1;
		   	
	       m--;
		}
		
    	if(b==0)
    	cout<<s;
    	else
    	cout<<-1;
    	
	}
	
}
