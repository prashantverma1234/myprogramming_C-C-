#include<stdio.h>

void shell_sort(int a[],int n)
{
   int gap,i;
   	for(gap=n/2;gap>0;gap /=2)
   	{
   		for(i=gap;i<n;i++)
   		{
   			int temp=a[i];
   			int j;
   			
   			for(j=i;j>=gap&&a[j-gap]>temp;j=j-gap)
   			{
			   
   			a[i]=a[j-gap];
   			
   		    }
   		    
   		    a[j]=temp;
		   }
    }
}

main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
     shell_sort(a,n);
     
     for(i=0;i<n;i++)
     printf("%d ",a[i]);
     
     
}
