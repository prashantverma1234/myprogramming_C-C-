

#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a1[n],a2[n],m1=0,m2=0,l;
		for(int i=0;i<n;i++)
		cin>>a1[i];
		
		for(int j=0;j<n;j++)
		cin>>a2[j];
		
		for(int k=0;k<n;k++)
		{
			if(a1[k]<=a2[k])
			m1=0;
			else
			{
				m1=1;
				break;
			}
		}
		
		l=n-1;
		for(int m=0;m<n;m++)
		{
		  if(a1[m]<=a2[l])
			m2=0;
		  else
			{
				m2=1;
				break;
			}
			l--;
		}
		
		
		if(m1==0 && m2==0)
		cout<<"both"<<endl;
		else if(m1==0 && m2==1)
		cout<<"front"<<endl;
		else if(m1==1 && m2==0)
		cout<<"back"<<endl;
		else if(m1==1 && m2==1)
		cout<<"none"<<endl; 
		
		
		
		
	}
}
