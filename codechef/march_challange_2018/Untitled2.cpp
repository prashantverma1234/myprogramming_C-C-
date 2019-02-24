

#include<iostream>
using namespace std;
	
main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		
	   double res=0;
		int n;
		cin>>n;
		
		int prize[n],quant[n],dis[n];
		for(int i=0;i<n;i++)
		{
			cin>>prize[i]>>quant[i]>>dis[i];
		}
		
		for(int i=0;i<n;i++)
		{
			 double a,prize1,a1,prize2,prize3,tprize;
			 
			a=dis[i]*prize[i];
			 a=a/100; 
			prize1=prize[i]+a;
			a1=dis[i]*prize1;
			a1=a1/100;
			prize2=prize1-a1;
			prize3=prize[i]-prize2;
			tprize=(prize3)*(quant[i]);
			res=res+tprize;
		   
		}
		
		cout<<res<<endl;
	}
}
