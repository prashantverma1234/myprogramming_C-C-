#include<iostream>
using namespace std;
class abc
{
	private:
	static int a,b;
    public:
    void getdata()
	{
		
		cout<<"inter the number ";
		cin>>a>>b;
	 }
friend void show();

};

void abc:: show()
{
	cout<<a<<endl<<b<<endl;
}
int main()
{
	abc c;
	c.getdata();
	show();
	
}
