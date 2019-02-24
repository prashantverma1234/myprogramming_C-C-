#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	
	while(t--)
	{   
        int m=0;
		string s[5],s1[5];
		for(int i=0;i<4;i++)
		cin>>s[i];
		
		for(int i=0;i<4;i++)
		cin>>s1[i];
		
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(s[i]==s1[j])
				{
				m++;
				s1[j]=-1;
				s[i]=-2;
				break;
			    }
			}
		}
		if(m>=2)
		cout<<"similar"<<endl;
		else
		cout<<"dissimilar"<<endl;
	}
}
