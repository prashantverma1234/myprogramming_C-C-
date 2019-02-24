#include<stdio.h>
main()
{
	int n,a[10],i=0,b,c,d;
	int temp,j;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
    }
     
	for(j=1;j<i;j++)
	{
		if(a[0]<a[j])
		{
			temp=a[0];
			a[0]=a[j];
			a[j]=temp;
		}
	}
	b=a[0];
	
	for(j=1;j<i;j++)
	{
		if(a[0]>a[j])
		{
			temp=a[0];
			a[0]=a[j];
			a[j]=temp;
		}
	}
	c=a[0];
	d=b-c;
	printf("\nthe difference b/w largest and lowerst number\n");
	printf("%d",d);
}
