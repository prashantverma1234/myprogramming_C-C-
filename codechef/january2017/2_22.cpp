

#include<iostream>
#include<algorithm>
#include<set>

using namespace std;





		struct two
	    {
	    	int value;
	    	int index;
		};

bool key(two a, two b)
{
	return (a.value<b.value);
}

main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int x,y,l;

		two a[n];
		
		for(int j=0;j<n;j++)
		{
		cin>>a[j].value;
		a[j].index=j;
		}
		
        sort(a,a+n,key);
       
	    set<int>s[n];
        
        for(int j=0;j<n-1;j++)
        {
        	cin>>x>>y;
        	s[x-1].insert(y-1);
        	s[x-1].insert(x-1);
        	s[y-1].insert(x-1);
        	s[y-1].insert(y-1);
		}
     
      
      	     
	        for(int j=0;j<n;j++)
	        {   l=0;
	        	for(int k=n-1;k>=0;k--)
	        	{
		
	  	         if(s[j].find(a[k].index) != s[j].end())
	            { 
				l++;
				continue;
			    }
	            else
	            {
	          //    if(j==n-1)
	          //    cout<<a[k].index<<" ";
	          //    else
			      cout<<a[k].index +1<<" ";
                  break;
			    }
	           }
	           if(l==n)
	           cout<<"0"<<" ";
            }
	  cout<<endl;
	}
	
	
}
