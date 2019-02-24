#include<iostream>
using namespace std;
void print();

struct node
{
	int data;
	struct node* next;
};
struct node*temp=NULL,*temp1=NULL,*head=NULL,*last=NULL,*temp2=NULL,*temp3=NULL;

void inqueue(int x)
{
	cout<<"list is :";
	temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		temp->next=temp;
		temp1=head;
	}
	else
	{   if(temp1==head)
		temp1->next=temp;
		else
		temp2->next=temp;
		temp->next=head;
		last=temp;
		temp1=temp;
		temp2=last;
	}
	print();
}


void pop()
{
	if(head==last)
	{
	delete(head);
	head=NULL;
    }
	else
	{
	temp=head;
	head=temp->next;
	delete(temp);
	last->next=head;
    }
	cout<<"list is ";
	print();
}

void dequeue()
{
	cout<<"list is :";
	pop();
}
void push(int x)
{
	temp=new node();
	temp->data=x;
	if(head==NULL)
	last=temp;
	temp->next=head;	
	head=temp;
	last->next=temp;
	cout<<"list is : ";
	print();
	temp2=last;	
}

void print()
{
	if(head!=NULL)
	{
		temp=head;
		do
		{
			cout<<" "<<temp->data;
			temp=temp->next;
		}
		while(temp!=head);
		
	}
	
}
main()
{
	int x,y,n;
	while(1)
	{
	string s;
	cout<<endl<<"enter the operation"<<endl;
	cin>>s;
	if(s=="push")
	{
		cout<<"enter the data ";
		cin>>x;
		push(x);
	}
	
	else if(s=="pop")
	pop();
	
	else if(s=="inqueue")
	{
		cout<<"enter the data ";
		cin>>x;
		inqueue(x);
	}
	
	else if(s=="dequeue")
	dequeue();
	
	else if(s=="help")
	{
		printf("\npush");
		printf("\npop");
		printf("\ninqueue");
		printf("\ndequeue");
	}
	else if(s=="print")
	print();
	else
	break;
	
}
}











