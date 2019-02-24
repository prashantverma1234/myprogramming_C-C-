
#include<iostream>
using namespace std;

main()
{
	int n,k,temp,temp1;
	cin>>n;
	string s;
	cin>>s;
	cin>>k;
	
	for(int i=0;i<n;i++)
	{
		
		k=k%26;
		if(s[i]+k <=122 && s[i]+k >=97 && s[i]>=97 && s[i]<=122)
		s[i]=s[i]+k;
		else if(s[i]+k <=90 && s[i]+k >=65 && s[i]>=65 && s[i]<=90)
		s[i]=s[i]+k;
		else if((s[i] <97 && s[i]>90) || (s[i] >122 )|| s[i]<65)
		s[i]=s[i];
		else if(s[i]+k > 122 && s[i]<123 && s[i]>96)
		{
			temp=122-s[i];
			temp1=k-temp;
			s[i]=97+temp1-1;
			
		}
		else if(s[i]+k >90 && s[i] <91) 
		{
			temp=90-s[i];
			temp1=k-temp;
			s[i]=65+temp1-1;
		} 
	}
	
	cout<<s;
}
