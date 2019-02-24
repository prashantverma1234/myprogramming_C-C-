#include<stdio.h>

main()
{
	printf("enter the size of matrix 1");
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	printf("enter the size of matrix 2");
	int n3,n4,i,j,k;
	scanf("%d%d",&n3,&n4);
	int a[n1][n2],a1[n3][n4],c[10][10];
	
	printf("enter the element of matrix 1\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		scanf("%d",&a[i][j]);
		
	}
	
	printf("enter the element of matrix 2\n");
	for(i=0;i<n3;i++)
	{
		for(j=0;j<n4;j++)
		scanf("%d",&a1[i][j]);
		
	}
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			c[i][j]=0;
			for(k=0;k<n1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*a1[k][j];
			}
	
		}
	}
	
	for(i=0;i<n1;i++)
	{
		printf("\n");
		for(j=0;j<n1;j++)
		printf("%d ",c[i][j]);
		
	}
	
      
	  
	  
	  	
}
