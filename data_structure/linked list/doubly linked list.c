#include<stdio.h>
#include<string.h>
struct node
{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head=NULL,*last=NULL;
struct node* temp=NULL, *temp1=NULL, *temp2=NULL,*temp3=NULL;

void delete_pos(int x)
{
	int i;
	if(x==1)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	else
	{
		temp1=head;
		temp=head;
		for(i=0;i<x-2;i++)
		temp1=temp1->next;
	    temp=temp1->next;
		  temp1->next=temp->next;
		  free(temp);
		  if(temp1->next=NULL)
		  temp1->next=NULL;
		  else
		  temp->next->prev=temp1;
		  
		  
		  
		  
	}
	
}
void insert_pos(int x,int n)
{
	int i;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(n==1)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
	temp1=head;
	for(i=0;i<n-2;i++)
	temp1=temp1->next;
	temp->next=temp1->next;
	temp1->next=temp;
	temp->prev=temp1;
	if(temp1->next->next==NULL)
	temp->next=NULL;
	else
     temp->next->prev=temp;
    
    }
	

}
void insert_end(int x)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
	head=temp;
	temp1=temp;
    }
	else
	{
		temp->prev=temp1;
		temp1->next=temp;
		temp1=temp;
		
	}
}
void insert_started(int x)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
	head=temp;
	last=temp;
    }
	else
	{
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
}
 
	
 
main()
{
	int x,n,i;
	char s[10];
	while(1)
	{
	printf("\nenter the operation code\n");	
	scanf("%s",s);
	if(strcmp(s,"insert_b")==0)
	{
		printf("how many numbers: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		 scanf("%d",&x);
		insert_started(x);
	}}
	
	else if(strcmp(s,"insert_e")==0)
	{
		printf("how many numbers: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
		insert_end(x);
	}}
	
	else if(strcmp(s,"delete_pos")==0)
	{
		printf("enter the position\n ");
		scanf("%d",&x);
		delete_pos(x);
	}
	else if(strcmp(s,"print")==0)
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}

	}
 
 else if(strcmp(s,"insert_pos")==0)
 {
 	printf("enter the data and position\n");
 	scanf("%d",&x);
 	scanf("%d",&n);
 	insert_pos(x,n);
 }
  else if(strcmp(s,"help")==0)
  {
  	printf("\ninsert_b");
  	printf("\ninsert_e");
  	printf("\ninsert_pos");
  	printf("\ndelete_pos");
   
  	
  }
  else
  break;



}
}
