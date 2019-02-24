
#include<iostream>
using namespace std;

main()
{
	int n,m;
	cin>>n>>m;
	int a[n],a1[n],a0[n],l,r,k;
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	 
	
	int temp=a[0],b1=0,b=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==temp)
		b++;
		else
		{
			for(int j=b1;j<(b+b1);j++)
			{
			a1[j]=b1+b;
			a0[j]=b1+1;
		    }
			
			b1=b1+b;
			b=1;
			temp=a[i];
		}
		
	}
	  for(int j=b1;j<(b+b1);j++)
	  {
      a1[j]=b1+b;
      a0[j]=b1+1;
      }
      
    
	
	int index,max;
	for(int i=0;i<m;i++)
	{
		cin>>l>>r>>k;
	
		index=((r-l+1)/2) + (l-1);
		
	    max=a1[index]-a0[index]+1;
	    
	    if(l>a0[index] )
	    {
	    	max=max-(l-a0[index]);
		}
		if(r<a1[index])
		    max=max-(a1[index]-r);
		
	    if(max >=k)
		cout<<a[index]<<endl;
		else
		cout<<"-1"<<endl;
	}
}
