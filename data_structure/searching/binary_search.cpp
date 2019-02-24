#include<iostream>
using namespace std;

int binary_search(int a[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		
		if(a[mid]==x)
		return mid;
		if(a[mid]>x)
		return binary_search(a,l,mid-1,x);
		else
		return binary_search(a,mid+1,r,x);
	}
	return -1;
}

main()
{
	cout<<"give the size of an array "<<endl;
	int n;
	cin>>n;
	int a[n],x,result;
	cout<<"enter the array ";
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"enter the element you want to search ";
	cin>>x;
	
    result=	binary_search(a,0,n-1,x);
    if(result==-1)
    cout<<endl<<"element isnt in list ";
    else
    cout<<endl<<"index is "<<result;
	
}
