
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a=65,f=0,f1=0,f2=0,b,c,i;
  		
		string s;
		cin>>s;
	
		while(a<=90)
		{
			char ch='A';
		    f=0,f1=0,f2=0;
			c=a%10;
			b=a/10;
			i=0;
			c=c+'0';
			b=b+'0';	
			if(b==c)
			{ 
			    i=0;
				while(s[i]!='\0')
				{
					if(s[i]==b)
					{
						break;
					}
					else
					f=0;
					i++;
				}
				if(s[i]!='\0')
				i++;
				
				while(s[i]!='\0')
				{
					if(s[i]==b)
					{
						f=1;
						break;
					}
					else
					{ 
					  i++;
					}
				}
				
				if(f==1)
				{
					
					ch=ch+a-65;
					cout<<ch;
				}
				
				
			}
			else
			{
				
				i=0;
				while(s[i]!='\0')
				{
					if(s[i]==b)
					{ 
				      f1=1;
					}
					if(s[i]==c)
					{
						f2=1;
					}
					if(f1==1 && f2==1)
					{
						ch=ch+a-65;
						cout<<ch;
						break;
					}
					
					i++;
				}
				
			}
		
		    
			a++;
		}
		
		cout<<endl;
	}
}
