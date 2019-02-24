
#include<iostream>
using namespace std;

inline void take(int *in)
{
	char c = 0;
	while(c<33)
	c=getc(stdin);
	*in=0;
	while(c>33)
	{
		*in = (*in)*10 + c- '0';
		c=getc(stdin);
	}
}

main()
{
	int t;
	cin>>t;
	for(int m=0;m<t;m++)
	{
		int big=0;
		int o1,o2;
		cin>>o1>>o2;
		int a[o1*o2 +1];
		
		for(int i=1;i<=o1*o2;i++)
	    {
	    	take(&a[i]);
	    	big+=a[i];
		}
	    if(big<(o1/2 + 1)*(o2/2 +1))
	    {
	    	cout<<"0"<<endl;
	    	continue;
		}
	    
	    int zero,one,zero0,one1,flag=0,l1,l,s=0;
	    for(int i=1;i<=o2;i++)
	    {
	    	zero0=0;
	    	one1=0;
	    	zero=0;
	    	one=0;
	    	l=0;
	    	s++;
	    	for(int j=i;j<=o1*o2;j++)
	    	{
	    		l++;
	    		
	    		if(a[j]==0)
	    		zero++;
	    		else
	    		one++;
	    		if(l<=o2 || s==1)
	    		{
	    			
	    		  if(j%(o2+i-1)==0)
	    		  {
	    			if(one>zero)
	    			one1++;
	    			else
	    			zero0++;
	    			
	    			zero=0;
	    			one=0;
				  }
				}
				else if(s!=1 && l>o2)
				{
						
	    		  if(j%o2==(i-1))
	    		  {
	    			if(one>zero)
	    			one1++;
	    			else
	    			zero0++;
	    			
	    			zero=0;
	    			one=0;
				  }
				}
				else
				{
					
				}
				
			}
			if(i>1)
			{    
			     one=0;
				 zero=0;
				
			  for(int k=1;k<i;k++)
			  {
				 
				 if(a[k]==0)
				 zero++;
				 else
				 one++;
			  }
			  for(int k=o1*o2;k>=(o1*o2)-(o2-i);k--)
			  {
			  	  if(a[k]==0)
			  	  zero++;
			  	  else
			  	  one++;
			  }
			  if(zero<one)
			  one1++;
			  else
			  zero0++;
		    }
		    
		    if(one1>zero0)
		    {
		    	cout<<"1"<<endl;
		    	flag=1;
		    	break;
			}
			
		}
		if(flag==0)
		cout<<"0"<<endl;
	}
}
