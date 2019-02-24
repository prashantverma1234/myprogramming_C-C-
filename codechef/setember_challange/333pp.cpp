
#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,n1,j,i,winner,max=-1;
		cout<<endl;
		cin>>n;
		for(j=0;j<n;j++)
		{
		   int c[101],bo,count=0;
		   cin>>n1;
		   int a[6]={0};
		   for(i=0;i<n1;i++)
		   {
		   	   cin>>c[i];
		   	    if(c[i]==1)
		   	   a[0]=a[0]+1; 
		   	   else if(c[i]==2)
		   	   a[1]=a[1]+1;
		   	   else if(c[i]==3)
		   	   a[2]=a[2]+1;
		   	   else if(c[i]==4)
		   	   a[3]=a[3]+1;
		   	   else if(c[i]==5)
		   	   a[4]=a[4]+1;
		   	   else if(c[i]==6)
		   	   a[5]=a[5]+1;
		   }
		    sort(a,a+6);
		    bo=a[0]*4 + (a[1]-a[0])*2 + (a[2]-a[0] - (a[1]-a[0]))*1;
		    
		   int to=n1+bo;
		   
		   cout<<to;
			if(to>max)
			{
				max = to;
				winner = j;
			}
			else if(to == max)
			{
				winner = -1;
			}
		   
		   
		   
		}
		
		
		if(winner==0)
		cout<<"chef";
		else if(winner==-1)
		cout<<"tie";
		else
		cout<<winner+1;   
          
		
	}
}
