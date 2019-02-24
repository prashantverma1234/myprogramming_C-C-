#include<iostream>
using namespace std;

void show(int n)
{
	for(int i=0;i<n;i++)
	cout<<"| ";
	cout<<endl;
}
main()
{
	int n=21,x,rand=1,y,diff,choice;
	while(1)
	{
		cout<<"press 1 for rule, 2 for game, 3 for exit"<<endl;
		cin>>choice;
		if(choice==1)
		{
			cout<<"you can pick 1, 2, 3 or 4 match sticks at a time"<<endl;
			cout<<"you and computer will pick up the match sticks one by one"<<endl;
			cout<<"whoever picks the last match sticks will lose"<<endl;
		}
		else if (choice == 2)
		{
			n=21;
		cout<<endl<<endl<<"total match stick: "<<n<<endl;
		while(n>1){
		cout<<endl<<endl<<"pick up 1, 2, 3 or 4 match sticks"<<endl;
		while(1)
		{
		cin>>x;
		if(x>4 || x<1)	
		{
		if(x%2==0)
		cout<<endl<<"bhosdk 4 tak dal na madarchod"<<endl;
		else
		cout<<endl<<"chutiya dusra number dal na ben ke lode"<<endl;
		}
		else
		break;
		}
		n=n-x;
		cout<<endl<<"you picked = "<<x<<endl<<"match sticks left = "<<n<<"  ";
		show(n);
		diff = n-6;
		if(n<=5 && n>=1)
		y=n-1;
		else if(diff<=4 && diff>=1)
		y=diff;
		else if(x==1 || x==3)
		{
			if((rand++)%2==0)
			y=1;
		else
		y=3;
		}
		else
		{
		if((rand++)%2==0)
		y=2;
		else
		y=4;
		}
	
		n=n-y;
		cout<<endl<<"i picked = "<<y<<endl<<"match sticks left = "<<n<<"  ";
		show(n);	
		}
		cout<<"you picked last match stick. you lost! hehe"<<endl;
		}
		else 
		return 0;
	}
}
