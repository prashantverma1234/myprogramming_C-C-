#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	
	char a[n];
	for(i=0;i<n;i++)
	scanf("%c",&a[i]);
	
	printf("\n");	
	for(i=0;i<n;i++);
	printf("%c",a[i]);
	
}
