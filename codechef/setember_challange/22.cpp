
#include<iostream>
#include<string.h>
using namespace std;

main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
   	   cout<<endl;
   	   int j,l,l1,k=0,k1=0;
   	   string s;
   	   cin>>s;
   	   l=s.length()-1;
   	   l1=l;
   	   for(j=0;j<=l/2;j++)
   	   {
   	   	  if(s[j]==s[l1] && s[j]!='.' && s[l1]!='.')
   	   	  k=1;
   	   	  else if(s[j]=='.' && s[l1]=='.')
   	   	  {
   	   	  	s[j]='a';
   	   	  	s[l1]='a';
   	   	  	
	      } 
		  else if(s[j]=='.' && s[l1]!='.')
		  s[j]=s[l1];
		  else if(s[j]!='.' && s[l1]=='.')
		  s[l1]=s[j];
		  else
		  {
		  	cout<<-1;
		  	k1=1;
		  	break;
		  } 
   	   	  l1--;
	   }
	   
	   if(k1==0)
	   cout<<s;
   }	
}
