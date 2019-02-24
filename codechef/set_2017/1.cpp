
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
		int a[n];
		long long int min=1000000000,sum=0,tem,ind ;
	   for(int i=0;i<n;i++)
	   {
	   	 cin>>a[i];
	   	 sum=sum+a[i];
	   }
	   
	   for(int i=0;i<n;i++)
	   {
	   	   tem=sum+a[i];
	   	   if(tem<min)
	   	   {
			  
	   	   min=tem;
	   	   ind=i+1;
	      }
	      
	   }
	   
	   cout<<ind<<endl;
	}
}
