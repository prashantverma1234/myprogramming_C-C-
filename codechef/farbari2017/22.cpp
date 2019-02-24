

#include<iostream>
#include<algorithm>
using namespace std;

main()
{
	long long int n,l,r;
	cin>>n>>l>>r;
	
	long long int a[n],temp=0,rangmin,rangmax,min,max,x,y,res;
	for(long long int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	rangmin=a[n-1] -a[n-2]+1;
	rangmax=a[n-1] +a[n-2]-1;
	
	for(long long int i=n-2;i>0;i--)
	{
		y=a[i];
		x=a[i-1];
		min=y-x+1;
		max=y+x-1;
		if(min < rangmin && max >= rangmin)
		{
		   rangmin=min;
		}
		else if(min >= rangmin && max <= rangmax)
		{
			
		}
		else if(max < rangmin && l<= max && r >= rangmin)
		{
			temp=rangmin-max;
			rangmin=min;
		}
		else if(max<rangmin && (r<=max ||l>=rangmin))
		{
			rangmin=min;
		}
		else if(max<rangmin && r>max && r<rangmin)
		{
			rangmin=min;
			r=max;
		}
		else if(max<rangmin && l<rangmin &&l>max)
		{
			rangmin=min;
			l=rangmin;
		}
		else 
		{
			
		}
	}
	
	if(rangmax<l)
	cout<<"0";
	else if(r<rangmin)
	cout<<"0";
	else if(rangmin >=l && rangmax <=r)
	{
		res=rangmax-rangmin +1 - (temp);
		cout<<res;
	}
	else if(rangmin <l && rangmax >=l && rangmax <=r)
	{
		res=rangmax-l+1-(temp);
		cout<<res;
	}
	else if(rangmax >r && rangmin <=r && rangmin >=l)
	{
		res=r-rangmin+1-(temp);
		cout<<res;
	}
	else
	{
	     	
	}
	
}
