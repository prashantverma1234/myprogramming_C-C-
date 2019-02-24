#include<iostream>
using namespace std;

int partition(int a[],int start,int end)
{
	int piviot=a[end];
	int pindex=start;
	for(int i=start;i<end;i++)
	{
		if(a[i]<=piviot)
		{
			swap(a[i],a[pindex]);
			pindex++;
		}
	}
	swap(a[pindex],a[end]);
	return pindex;
}
void quick_sort(int a[],int start,int end)
{
	if(start<end)
	{
		int pindex=partition(a,start,end);
		quick_sort(a,start,pindex-1);
		quick_sort(a,pindex+1,end);
	}
}

main()
{
	int n;
	cin>>n;
	int a[n],i,start,end;
	for(i=0;i<n;i++)
    cin>>a[i];
    start=0;
    end=n-1;
    quick_sort(a,start,end);
    
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    
}
