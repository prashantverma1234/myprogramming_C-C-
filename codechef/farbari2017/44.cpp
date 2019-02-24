
#include<iostream>
using namespace std;

main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=0;i<n;i++)
	cin>>a[i];

   for(int j=0;j<m;j++)
   {
	 int l,r,k,b=0,f1=0,temp,k1=0,rang;	
	cin>>l>>r>>k;
	temp=a[l-1];
	rang=r-l+1;
	for(int i=l-1;i<r;i++)
	{
		k1++;
		if(a[i]==temp)
		{
			b++;
			if(b>=k)
			{
				cout<<a[i]<<endl;
				f1=1;
				break;
			}
		}
		else
		{
			temp=a[i];
			b=1;
		}
		if(k1>(rang-k+2) && (b==0 ||b==1))
		break;
	}
	
	if(f1==0)
	cout<<"-1"<<endl;
}
}
