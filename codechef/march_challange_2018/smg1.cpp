

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
		int a[n],max=0,last,n1,max1;
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
	//	last=a[n-1];
	    n1=n;
		for(int i=0;i<n;i++)
		{	
	     //	last=a[n-1];
			
			for(int j=0;j<n;j++)
			{
				if(a[j]>=a[n-1])
			   {
		
					
					if(max<n)
					{
					max1=n-j;
					if(max<max1)
					max=max1;
				    }
			   	
					break;
				
			   }
	    	}
	
		//	cout<<n;
		    n--;
			if(max>=n)
			{
				break;
			}
	}
			cout<<max<<endl;
}

}


