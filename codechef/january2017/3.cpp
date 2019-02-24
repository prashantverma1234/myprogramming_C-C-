

#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for(int m1=0;m1<t;m1++)
	{
		int n,m,f1=0,f2=0,ff3=0,ff4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f10=0,flag=0,i,j,k,f3=0,f4=0,j1,z=0,z1=0;
		cin>>n>>m;
		char a[n][m];
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			cin>>a[i][j];
		
		}
		
		for(i=0;i<n;i++)
		{
			if(a[i][0]=='W' || a[i][m-1]=='W')
			{
				cout<<"no"<<endl;
				z=1;
				break;
			}
		}
		if(z==0)
		{
		for(i=0;i<m;i++)
		{
			if(a[n-1][i]=='W')
			{
				cout<<"no"<<endl;
				z1=1;
				break;
			}
		}
	    }
		
		if(z==0 && z1==0)
		{
			if(a[n-1][0]=='A')
			{
				for(j=n-2;j>=0;j--)
				{
					if(a[j][0]=='B')
					{
						cout<<"no"<<endl;
						f1=1;
						break;
					}
				}
			}
			else
			{
			for(j=n-2;j>=0;j--)
			{
				if(f2==1)
				{
					if(a[j][0]=='B')
					{
						cout<<"no"<<endl;
						f3=1;
						break;
					}
				}
				if(a[j][0]=='A')
				f2=1;
			}
		    }
		    
		    
			if(a[m-1][n-1]=='A')
			{
				for(j=n-2;j>=0;j--)
				{
					if(a[j][n-1]=='B')
					{
						cout<<"no"<<endl;
						ff3=1;
						break;
					}
				}
			}
			else
			{
			for(j=n-2;j>=0;j--)
			{
				if(f4==1)
				{
					if(a[j][n-1]=='B')
					{
						cout<<"no"<<endl;
						ff4=1;
						break;
					}
				}
				if(a[j][n-1]=='A')
				f4=1;
			}
		    }
	     	     
		    if(ff3== 0 && ff4==0 && f1==0 && f3==0)
		    {
		    	for(j=1;j<m-1;j++)
		    	{
		    		
		    		if(f5==1 || f7==1 ||f8==1 ||f10==1)
		    		break;
		    		
		    		f6=0,f8=0,f9=0;
		    		if(a[n-1][j]=='A')
		    		{
		    			for(j1=n-2;j1>=0;j1--)
		    			{
		    				if(a[j1][j]=='B' || a[j1][j]=='W')
		    				{
		    					cout<<"no"<<endl;
		    					f5=1;
		    					break;
							}
						}
					}
					else
					{
						for(j1=n-2;j1>=0;j1--)
						{
							if(f6==1)
							{
								if(a[j1][j]=='B' || a[j1][j]=='W')
								{
									cout<<"no"<<endl;
									f7=1;
									break;
								}
								
							}
							
								if(f8!=1 && f9==1)
								{
									if(a[j1][j]=='B')
									{
										cout<<"no"<<endl;
										f10=1;
										break;
									}
								}
							
							if(a[j1][j]=='A')
							{
								f6=1;
							}
							
							if(a[j1][j]=='W')
							{
								f9=1;
								if((a[j1][j-1]!='B' && a[j1][j-1]!='W') || (a[j1][j+1] != 'B' && a[j1][j+1] != 'W'))
								{
									cout<<"no"<<endl;
									f8=1;
									break;
								}
							}
						}
					}
					 
					if(f5!=0 || f7!=0 || f8!=0 || f10!=0)
					flag=1;
				}
				 
				if(flag==0)
				cout<<"yes"<<endl;
			}
		}
	}
}
