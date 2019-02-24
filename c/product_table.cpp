#include<stdio.h>
main()
{
	int n,i,j,k,l=1;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		printf("\n");
		for(j=i;j<n;j++)
		printf("  ");
		
		if(l==1){
		printf("%d  ",i);
		l++;
	     }
	     else{
		for(k=l;k<=l+i-1;k++)
		printf("%d  ",k);
		l=k;
	    }}
}
