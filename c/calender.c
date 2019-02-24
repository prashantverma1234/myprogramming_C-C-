#include<stdio.h>
#include<string.h>
main()
{
	int n,a,d,leap;
	char s[10];
	printf("enter any key to continue ");
	while(1)
	{
		scanf("%s",&s);
			if(strcmp(s,"exit")==0)
	     	break;
			 else
			 {
				 	
		printf("enter the year should be avove 1989\n");	
		
	scanf("%d",&n);
	printf("1 jan %d :",n);
	leap=(n-1989)/4;
	a=(n-1990)*365+leap;
	d=a%7;
	switch(d)
	{
	case 0: printf("monday");
	break;
	case 1: printf("tusday");
	break;	
	case 2: printf("thusday");
	break;
	case 3: printf("wednsday");
	break;
	case 4: printf("friday");
	break;
	case 5: printf("starday");
	break;
	case 6: printf("sunday");
	break;
    }
}}
}



































