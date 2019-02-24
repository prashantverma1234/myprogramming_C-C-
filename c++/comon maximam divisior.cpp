#include<iostream>
using namespace std;
main()
{
	int n,temp;
	cout<<"enter the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=1;j<n;j++)
		{
		    if(a[0]>a[j])
			{ 
			   temp=a[0];
			   a[0]=a[j];
			   a[j]=temp;	
			}	
		}
		int i=a[0];
		int j=0;
		if(i==1)
		cout<<endl<<"maximum common divisor : "<<i;
		else
		{
		while(i!=1)
		{
			while(j<n)
			{
				if(a[j]%i==0)
				j++;
				else
				{
				i--;
				j=0;
			    }
			    if(i==1)
			    {
			    	break;
				}
				
			}
			cout<<"maximum common divisor : "<<endl<<i;
			break;
		}}
}














