
#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i=0,f=0,a=0;
		cin>>n>>m;
		string s;
		cin>>s;
		int temp;
		temp=s[0];
		while(s[i]!='\0')
		{
		   if(s[i]==temp)
		   {
		   a++;
	      }
		   else
		   {
		   	 if(temp=='L' || temp=='R')
		   	 {
		   	 	if(a>=m)
		   	 	{
		   	 	cout<<"unsafe"<<endl;
		   	 	f=1;
		   	 	break;
		   	    }
		   	    else
		   	    {
		   	    a=1;
		   	    temp=s[i];
		   	    }
		   	    
			 }
			 else
			 {
			 	if(a>=n)
			 	{
			 		cout<<"unsafe"<<endl;
			 		f=1;
			 		break;
				 }
				 else
				 {
				 a=1;
				 temp=s[i];
			     }
			 }
			 
		   }
		   i++;	
		}
		  if(f==0)
		  {
	
		   	 if(temp=='L' || temp=='R')
		   	 {
		   	 	if(a>=m)
	
		   	 	{
		   	 	cout<<"unsafe"<<endl;
		   	 	f=1;
		       }
		   	    
			 }
			 else
			 {
			 	if(a>=n)
			 	{
			 		cout<<"unsafe"<<endl;
			 		f=1;
		        }
			 }
			 
		}
		if(f==0)
		cout<<"safe"<<endl;
	}
}
