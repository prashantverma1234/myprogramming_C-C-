#include<stdio.h>
main()
{
	char ch='A';
	int i,j,k,l,m,n,a;
	printf("enter the numbers");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		printf("\n");
		for(j=0;j<a-i;j++)
		printf("%c",ch+j);
	
		for(k=0;k<i;k++)
		printf(" ");
		
		for(l=0;l<i-1;l++)
		printf(" ");
		
		if(i==0)
		{
			for(n=a-2;n>-1;n--)
			printf("%c",ch+n);
		}
		else
		{
				
	    for(m=a-1-i;m>=0;m--)
		printf("%c",ch+m);
	    }
	}
}
