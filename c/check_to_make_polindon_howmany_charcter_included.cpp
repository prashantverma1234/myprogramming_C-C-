#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n,a=0,l=1,d,k=0,q,w=1;
	char c[15];
	scanf("%s",c);
	n=strlen(c);  
	for(i=0;i<n;i++)
	{
		q=0;
		for(j=l;j<n;j++)
		{
			if(c[i]==c[j])
			{
				k++;
				a++;
				q++;
				w++;
			}
		
		}
		if(q>0)
		a++;
		
		if(w>2)
		{
		i=i+a-1;
		w=1;
	    }
	 
		if(k>0)
		{
			if(a%2!=0)
			a--;
		}
		l++;
		
	}
	if(a==0)
	a=0;
	a++;

	d=n-a;
		if(d==-1)
	     d=0;
	printf("%d",d);
}

