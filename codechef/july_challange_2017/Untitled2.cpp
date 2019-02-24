

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0,a=1,min=1,max=1,k;
		string s;
		cin>>s;
		
		while(s[i]!='\0')
		{
			if(s[i]=='<')
			a++;
			else if(s[i]=='>')
			a--;
			else
			{
				
			}
			
			if(a<min)
			{
			   min=a;
			}
			if(a>max)
			max=a;
			
			i++;
		}
		
		if(min<1)
		{
		min=-(min);
		
		k=max+min+1;
	    }
	    else
	    {
	    	k=max;
		}
		
		cout<<k<<endl;
	}
}
