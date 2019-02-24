#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

main()
{
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		int n;
		cin>>n;
		int winner,max=-1;
		for(int k=0;k<n;k++)
		{
			int count,bonus=0,a[6]={0};
			cin>>count;
			for(int j=0;j<count;j++)
			{
				int x;
				cin>>x;
				a[x-1]++;
			}
			sort(a,a+6);
			bonus = a[0]*4 + (a[1]-a[0])*2 + (a[2]-a[0]-(a[1]-a[0]))*1;
			int total = count+bonus;
			if(total>max)
			{
				max = total;
				winner = k;
			}
			else if(total == max)
			{
				winner = -1;
			}
		}
		if(winner==0)
		cout<<"chef"<<endl;
		else if(winner==-1)
		cout<<"tie"<<endl;
		else
		cout<<winner+1<<endl;
	}
}
