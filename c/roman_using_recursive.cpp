//conversion into roman equevalent to function



#include<stdio.h>
void roman(int n);
main()
{
int n;
scanf("%d",&n);
roman(n);
}
void roman(int n)
{
if(n>=1000)
{
printf("m");
roman(n-1000);
}
else if(n>=500)
{
printf("d");
roman(n-500);
}
else if(n>=100)
{
printf("c");
roman(n-100);
}
else if(n>=50)
{
printf("d");
roman(n-50);
}
else if(n>=10)
{
printf("x");
roman(n-10);
}
else if(n>=5)
{
printf("v");
roman(n-5);
}
else if(n>=1)
{
printf("i");
roman(n-1);
}}
