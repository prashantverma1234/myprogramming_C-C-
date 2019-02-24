
#include<stdio.h>

main()
{
	int t,n,p,i,j,k,l;
	 //printf("enter the text cases");
	 scanf("%d",&t);
	 for(i=0;i<t;i++)
	 {
	 	//printf("enter the no of array");
	 	//printf("\n");
	 	scanf("%d",&n);
	 	scanf("%d",&p);
	 	int a[n];
	 	for(j=0;j<n;j++)
	 	scanf("%d",&a[j]);
	 	
	 	for(k=0;k<n;k++)
	 	{
	 	   for(l=k+1;l<n;l++)
	 	   {
	 	   	   if(a[k]*a[l]==p)
	 	   	   {
	 	   	   	  printf("\nyes");
	 	   	   	  l=n;
	 	   	   	  k=n;
			   }
			}
		 }
		 k--;
		 if(k==n-1)
		 printf("\nno");
	 	
	 }
}
