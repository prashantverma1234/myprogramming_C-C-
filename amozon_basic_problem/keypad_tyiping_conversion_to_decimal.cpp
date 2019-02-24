
#include<iostream>
using namespace std;
main()
{
    string s;
    int i,t,k,d;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    i=0,k=0;
	cin>>s;	
    while(s[k]!=NULL)
    {
    	if(s[k]<='Z'&&s[k]>='A')
    	d=1;
    	else 
    	d=0;
    	k++;
	}
	 if(d==1)
	 {

	while(s[i]!=NULL)
	{
		if(s[i]=='A'||s[i]=='B'||s[i]=='C')
		cout<<2;
		
		if(s[i]=='D'||s[i]=='E'||s[i]=='F')
		cout<<3;
		
		if(s[i]=='G'||s[i]=='H'||s[i]=='I')
		cout<<4;
		
		if(s[i]=='J'||s[i]=='K'||s[i]=='L')
		cout<<5;
		
		if(s[i]=='M'||s[i]=='N'||s[i]=='O')
		cout<<6;
		
		if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S')
		cout<<7;
		
		if(s[i]=='T'||s[i]=='U'||s[i]=='V')
		cout<<8;
		
		if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z')
		cout<<9;
		

		i++;
		
		
	}

	}
	else
	break;
	
	}
	
}
