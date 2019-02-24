#include<iostream>
using namespace std;

class student
{
private:
char name[20];
int age;
int phy,math;

public:

static int members;

void getdata()
{
cout<<"enter all marks: ";
cin>>phy>>math;
members++;
}
void avg();
};

void student :: avg()
{
	cout<<(phy+math)/3<<endl;
}

int student :: members;

int main()
{
	student richa,gullu,bikki;
	richa.getdata();
	gullu.getdata();
	bikki.getdata();
	cout<<richa.members<<endl;
	return 0;
	
}
