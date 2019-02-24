
#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,n1,j,i,l=0,m,k1,c1[101],s;
		cout<<endl;
		cin>>n;
		for(j=0;j<n;j++)
		{
		   int c[101],count=0,a=0,k;
		   cin>>n1;
		   for(i=0;i<n1;i++)
		   {
		   	   cin>>c[i];
		   }
		   sort(c,c+n1);
		   for(int i=0;i<n1;i++)
		   {
		   	   if(count<c[i])
		   	   {
		   	   	count =c[i];
		   	   	a++;
		       }
		    }
		   
		   
		   if(a==4)
		   c1[j]=n1+1;
		   else if(a==5)
		   c1[j]=n1+2;
		   else if(a==6)
		   c1[j]=n1+4;
		   else
		   c1[j]=n1;
		   
		}
		   s=c1[0];
		   m=s;
		   for(k1=0;k1<n-1;k1++)
		   {
		   	if(m<c1[k1+1])
		   	{
		   		m=c1[k1+1];
		   		j=k1+1;
			   }
		    }

          sort(c1,c1+n);
          
          
		if(n==1)
		cout<<"chef";
		else
		{
		if(c1[n-1]==c1[n-2])
		cout<<"tie";
		else if(s==m)
		cout<<"chef";
		else
		cout<<j+1;
	    }
	}
}
