

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int m=0;m<t;m++)
	{
		int i,j,k,l,l1,n;
		cin>>n;
		int a[n],a1[n],a2[n];
		
		for(i=0;i<n;i++)
		cin>>a[i];
		
		for(i=0;i<n-1;i++)
	    cin>>a1[i]>>a2[i];
	    
	    int p=0,a4[n];
	    for(i=0;i<n;i++)
	    {
	    	int a3[3*n],max,index;
	    	k=0;
	    	for(j=0;j<n-1;j++)
	    	{
	    	
	    		if(a1[j]==i+1)
	    		{
	    			a3[k]=a2[j];
	    			k++;
				}
				if(a2[j]==i+1)
				{
					a3[k]=a1[j];
					k++;
				}
				
	    		
			}
			if(k!=0)
			{
	    		a3[k]=i+1;
	    		k++;
			}
			
			int a5[n];
			for(j=0;j<n;j++)
			a5[j]=a[j];
			
			if(k==0)
			{
				l=0;
				max=a[l];
				index=l;
				for(l=1;l<n;l++)
				{
					if(max<a[l])
					{
						max=a[l];
						index=l;
					}

				}
			
			a4[p]=index+1;
			p++;
			}
		   else
		   {
		   	for(l=0;l<k;l++)
		   	{
		   		a5[a3[l]-1]=-1;
			   }
			   
			   max=-1;
			   for(l=0;l<n;l++)
			{
				if(max < a5[l])
				{
					max=a5[l];
					index=l;
				}
			}
			if(max==-1)
			{
				a4[p]=0;
				p++;
			}
			else
			{
				a4[p]=index +1;
				p++;
			}
			
		   }
			
		}
		
		for(i=0;i<n;i++)
		cout<<a4[i]<<" ";
		
		cout<<endl;
	}
}
