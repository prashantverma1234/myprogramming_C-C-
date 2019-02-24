

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int m=0;m<t;m++)
	{
		int n;
		cin>>n;
		int a[n],one=0,j,result=0,f1=0,k;

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			one++;
		}
	
		k=0;
		for(int i=0;i<one;i++)
		{
			if(a[i]==0)
			{
				f1=0;
				break;
				
			}
			else
			k++;
		}
		
		if(k==one)
		f1=1;
		
		
	while(f1!=1)
	{
		
		
			j=0;
			while(j<n-1)
			{
			   if(a[j]==0 && a[j+1]==1)
			   {
			   	  a[j]=1;
			   	  a[j+1]=0;
			   	  
			   	  j=j+2;
			   	  
			   }
			   else
			   j++;
	
          	}
			 result++;
				  	
		k=0;
		for(int i=0;i<one;i++)
		{
			if(a[i]==0)
			{
				f1=0;
				break;
				
			}
			else
			k++;
		}
		
		if(k==one)
		f1=1; 
			  		
	}
		
		cout<<result<<endl;
	}
}
