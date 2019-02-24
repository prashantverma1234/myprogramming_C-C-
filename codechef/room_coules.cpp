

#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;

	for(int i=0;i<t;i++)
	{	cout<<endl;
		int n;
		int A=0,A1=0,A2=0;
		
		cin>>n;
		char s[n];
		for(int j=0;j<n;j++)
		{
			cin>>s[j];
			if(s[j]=='R')
			A++;
			else if(s[j]=='B')
			A1++;
			else 
			A2++;
		}
		if(A==0 && A1==0)
		cout<<A;
		else if(A1==0 && A2==0)
		cout<<A1;
		else if(A==0 && A2==0)
		cout<<A2;
		
	    else
	    {
	    	
		if(A>=A1 && A>=A2)
		cout<<A1+A2;
		else if(A1>=A && A1>=A2)
		cout<<A+A2;
		else
		cout<<A+A1;
		
	    }
	
		
	}
}
