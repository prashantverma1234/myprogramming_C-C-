
#include<iostream>
#include<queue>
using namespace std;

main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		queue<long long int>s;
		long long int n,m,j;
		cin>>n>>m;
		long long int a[n],a1[m];
		for(j=0;j<n;j++)
		cin>>a[j];
		
		for(j=0;j<m;j++)
		cin>>a1[j];
  		
    	long long int l=0,r=n-1,f1=0,score=0,f,k,k1,r2;
		for(j=0;j<m;j++)
		{
		  long long	int sum=0,nsum=0,r1=a1[j],f4,same,value,value1;
			for(k=l;k<(r1+l);k++)
			{
				sum=sum+a[k];
				s.push(a[k]);
			}
			f4=0;
			same=sum;
		    nsum=sum;
		    value1=nsum-s.front()-s.back();
			for(k1=k;k1<=r;k1++)
			{
				
				s.push(a[k1]);
				nsum=nsum+a[k1]-s.front();
				s.pop();
				
			  	value=nsum-s.front()-s.back();
				
				if(nsum==sum)
				{

			         if(value1 > value)
			         {
			         value1=value;
			         l=k1-a1[j]+2;
			         r2=k1-1;
			         f4=1;
			         }
			      
		      	}   
				else if(nsum>sum)
				{
					
					sum=nsum;
					l=k1-a1[j]+2;
					r2=k1-1;
					f4=1;
				}
				else
				{
				}
		
			}
			if(f4==0)
			{
			 l++;
			 r=k-2;
		    }
		    else
			r=r2;
		      
			while(!(s.empty()))
			 s.pop();
			
			if(j%2==0)
			score=score+sum;
			else
			score=score-sum;
		
	 
			 
		}
			cout<<score<<endl;
	 
		
	}
}
