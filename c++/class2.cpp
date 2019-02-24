#include<iostream>
using namespace std;

class time
{
public:
int hour;
int min;
void sum(time a, time b)
{
min=(a.min+b.min)%60;
hour=a.hour+b.hour+(a.min+b.min)/60;
}
void show()
{
cout<<hour<<":"<<min<<endl;		
}};

main()
{
	time a,b,c;
	a.hour=1;
	a.min=50;
	b.hour=1;
	b.min=20;
	c.sum(a,b);
	c.show();
}
