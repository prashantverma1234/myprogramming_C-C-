
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		int i=0,j=0,total=0,zero=0,one=0;
		
		while(s[j]!='\0')
		{
			if(s[j]=='1')
			break;
			j++;
		}
		i=j+1;
		while(s[i]!='\0')
		{
			if(s[i]=='0')
			zero++;
			else
			{ 
			   if(zero==0)
			   zero--;
			   
				one++;
				total=total+(zero+1)*one;
				zero=0;
			}
			i++;
		}
	
		if(zero>0)
		{
		one++;
		total=total+(zero+1)*one;
	    }
		
		cout<<total<<endl;
	}
}
