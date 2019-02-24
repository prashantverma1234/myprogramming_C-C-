#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
	
	int n,b,i;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b=length(a);
	
	printf("%d",b);
	
}
