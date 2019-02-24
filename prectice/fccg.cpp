#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int len(int size)
{
	return size/4;
}
main()
{
	
	int n,b,size,i;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	size=sizeof(a);
	b=len(size);
	printf("%d",b);
	
}
