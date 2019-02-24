
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string a;
		int n;
		cin>>n;
		cin>>a;
		int zero=0,j1,j,sum,max,p=0,p1=0,p2=0;
		for(j=0;j<n;j++)
		{
			if(a[j]=='0')
			zero++;
		}
		
		for(j=0;j<n;j++)
		{
			if(a[j]=='0')
			p++;
			else
			break;
		}
		
				
		for(j=n-1;j>=0;j--)
		{
			if(a[j]=='0')
			p++;
			else
			break;
		}
	    
	    for(int j=0;j<n;j++)
	    {
	
            p1=0;
            while(a[j]=='0')
            {
                p1++;
                j++;
            }
           if(p2<p1)
           p2=p1;
        	
		}
	    
	    if(p>p2)
	    max=p;
	    else
	    max=p2;
	    
	
	    sum=zero-max;
		

		cout<<sum<<endl;
	}
}
