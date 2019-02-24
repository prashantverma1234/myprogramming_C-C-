#include<stdio.h>


void heapify(int a[],int n,int i)
{
	int temp;
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	
	
	if(l<n && a[l]>a[largest])
	largest=l;
	
	if(r<n && a[r]>a[largest])
	largest=r;
	// if largest is not root
	
	if(largest!=i)
	{
	   temp=a[largest];
	   a[largest]=a[i];
	   a[i]=temp;
	   
	   heapify(a,n,largest);	
	}
  	
}

void heap_sort(int a[],int n)
{
	int i,temp;
	// build heap
	for(i=n/2-1;i>=0;i--)
	heapify(a,n,i);

    for(i=n-1;i>=0;i--)
    {
    	// move current root to end
    	temp=a[0];
    	a[0]=a[i];
    	a[i]=temp;
    	
    	// call mex heapify
    	heapify(a,i,0);
    	
	}
}

main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	heap_sort(a,n);
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
