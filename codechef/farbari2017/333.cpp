
#include<iostream>
#include<queue>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int o1,o2;
		cin>>o1>>o2;
		int a[o1],k1,temp=0,f1=0,one=0,zero=0,k2;
		queue<int>s[o1];
		
		for(int j=0;j<o1;j++)
		{
			temp=0;
			for(int k=0;k<o2;k++)
			{ 
		
				cin>>k1;
				if(k1==0)
				k1=-1;
				
				temp=temp+k1;
			    s[j].push(k1);
			}
			a[j]=temp;
			if(a[j]>0)
			one++;
			else
			zero++;
			
			
		}
		if(one>zero)
		{
		cout<<"1"<<endl;
	    }
		else
		{
		
	    for(int j=o2-2;j>=0;j--)
		{
			one =0;
			zero=0;
			for(int k=o1-1;k>0;k--)
			{

			   	s[k-1].push(s[k].front());
			   	s[k].pop();
			}
			s[o1-1].push(s[0].front());
			s[0].pop();
			
			for(int k=o1-1;k>=0;k--)
			{   
				if(k!=0)
				a[k]=a[k]+ (s[k].back()) - (s[k-1].back());
				else
				a[k]=a[k]+ (s[0].back()) - (s[o1-1].back());
				
		   
				if(a[k]>0)
				one++;
				else
				zero++;
				
			
			}
			
			if(one>zero)
			{
				cout<<"1"<<endl;
			f1=1;
			break;
		    }
		
			
		}
		if(f1==0)
		cout<<"0"<<endl;
	    }
	}
}
