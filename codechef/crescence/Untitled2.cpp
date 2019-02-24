
#include<iostream>
using namespace std;

main()
{
	int n,j;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
	  int a[100000]={0},max=0,odd=0,d;
	  j=0;
	  while(s[j]!='\0')
	  {
	  	d=s[j];
	  	a[d]=a[d]+1;;
	  	if(max<s[j])
	  	max=s[j];
	  	j++;
	  }
	  
	  
      for(int k=97;k<123;k++)
      {
      	 a[k]=a[k]+a[k-32];
      	 a[k-32]=0;
	  }
	  
	  for(int k=0;k<=max;k++)
	  {
	  	if(a[k]%2!=0)
	  	odd++;
	  }
	  
	  if(odd>1)
	  cout<<"No"<<endl;
	  else
	  cout<<"Yes"<<endl;
	  
	}
}
