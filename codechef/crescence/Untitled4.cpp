
#include<iostream>
using namespace std;
main()
{
	long long int n;
	cin>>n;
	long long int a[n],smax,smin,sum=0,max,min;
	
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
    }
	
	long long int q;
	cin>>q;
	
	for(int j=0;j<q;j++)
	{ 
	  long long  int l,r;
	   char ch;
	   cin>>ch;
	   cin>>l>>r;
	   
	   if(ch=='U')
	   {
	   	 a[l-1]=r;
	   }
	   else if(ch=='A')
	   {
	   	 for(int k=l-1;k<r;k++)
	   	 sum=sum+a[k];
	   	 cout<<sum<<endl;
	   }
	   else if(ch=='M')
	   {  
	       max=0;
	   	  for(int k=l-1;k<r;k++)
	   	  {
	   	  		if(max<a[k])
                  max=a[k];
                  
		  }
		  cout<<max<<endl;
	   }
	   else if(ch=='m')
	   {
			 min=1000000000;
	   	  for(int k=l-1;k<r;k++)
	   	  {
	   	  		if(min>a[k])
                  min=a[k];
                  
		  }
		  cout<<min<<endl;
	   }
	   else if(ch=='S')
	   { 
         if(n==1)
         cout<<"NA"<<endl;
         else
         {
         	max=0;
	   	 for(int k=l-1;k<r;k++)
	   	 {
	   	 	if(max<a[k])
	   	 	{
	         smax=max;
	   	 	 max=a[k];
		    }
		    else if(smax < a[k] && max!=a[k])
		    smax=a[k];
		}
		 cout<<smax<<endl;
	     }
	   }
	   else if(ch=='s')
	   {
	   	  if(n==1)
	   	  cout<<"NA"<<endl;
	   	  else
	   	  {
	     	min=1000000000;
	   	 for(int k=l-1;k<r;k++)
	   	 {
	   	 	if(min>a[k])
	   	 	{
	         smin=min;
	   	 	 min=a[k];
		    }
		    else if(smin > a[k] && min!=a[k])
		    smin=a[k];
		 }
		 cout<<smin<<endl;
	      }
	   }
	   else
	   cout<<"!!!"<<endl;
	   	
	}

}
