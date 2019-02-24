#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void print();
struct node
{
	int data;
	struct node* next;
};
struct node* temp=NULL,*temp2=NULL,*prevX=NULL,*prevY=NULL;
struct node* head=NULL,*temp1=NULL,*prev=NULL,*temp3=NULL;
struct node* p1=NULL,*temp4=NULL,*temp5=NULL,*temp6=NULL;

void split_EO()
{
	int i=0,j;
	temp=head;
	temp1=head;
	while(temp1->next!=NULL)
	{
	temp1=temp1->next;
	i++;
    }
	
	for(j=0;j<=i;j++)
	{
		if(temp->data % 2!=0)
		{
			if(temp==head)
			{
				head=temp->next;
				temp1->next=temp;
				temp->next=NULL;
	
				temp1=temp;
				temp=head;
		
			}
			else
			{
				temp3->next=temp->next;
				temp3=temp;
				temp1->next=temp;
				temp1=temp;
				temp4=temp->next;
				temp->next=NULL;
				temp=temp4;
			}
		}
			else
			{
				temp3=temp;
				temp=temp->next;
			}
		
	}
}

void delete_LM()
{
	temp=head;
	temp3=head->next;
	while(temp3!=NULL)
	{
		if(temp->data<temp3->data)
		{
			if(temp==head)
			{
				temp2=temp;
				temp=temp->next;
				temp3=temp3->next;
				free(temp2);
				head=temp;
		
			}
			else
			{
				temp5->next=temp5->next->next;
				temp2=temp;
				temp=temp->next;
				temp3=temp3->next;
				free(temp2);
			}
		}
		else
		{
			temp5=temp;
			temp=temp->next;
			temp3=temp3->next;
			
		}
    }
	
}

void reverse_pos(int n)
{
	int i;
	temp=temp1=temp3=head;
	for(i=1;i<n;i++)
	temp=temp->next;
	head=temp;
	temp2=temp1;
	temp3=temp3->next;
	temp1->next=temp->next;
	
	for(i=1;i<n;i++)
	{
		temp4=temp3->next;
		temp3->next=temp2;
		temp2=temp3;
		temp3=temp4;
	}
}

void alternate_delete()
{
	temp=head;
	while(temp!=NULL&&temp->next!=NULL)
	{
		temp1=temp->next;
		temp->next=temp->next->next;
		temp=temp->next;
		free(temp1);
	}
}




void roted(int n)
{
	int n1=1;
	if(n==0)
	print();
	else
	{
	temp=head;
	temp1=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->next=head;
		while(n1<n)
		{
		temp1=temp1->next;
		n1++;
	    }
		head=temp1->next;
		temp1->next=NULL;
		print();
       }

}
void sorted()
{
	int x;

	temp2=head;
	while(temp2!=NULL)
	{
			temp=head;
	temp1=head->next;
	while(temp!=NULL&&temp1!=NULL)
	{
		if(temp->data>temp1->data)
		{
			x=temp->data;
			temp->data=temp1->data;
			temp1->data=x;
		}
		temp=temp->next;
		temp1=temp1->next;
	}
	temp2=temp2->next;
	}
}
void palindrom(struct node* p)
{
	int d=0;
	if(p==head)
	p1=head;
		if(p->next!=NULL)
	   palindrom(p->next);
	   
	   if(p1!=NULL)
	   {
	   	
	   	 if(p->data==p1->data)
		  printf("");
	   	else
	   	d++;
	   	
	   	p1=p1->next;
       }
       if(p1==NULL)
       {
       	if(d==0)
       	printf("\nlist is palindrom");
       	else
       	printf("list is not palindrom");
	   }
	   
}
void swaping(int x,int y)
{
	temp=head;
	while(temp->data!=x)
	{
		prevX=temp;
		temp=temp->next;
    }
	temp1=head;
	while(temp1->data!=y)
	{
		prevY=temp1;
		temp1=temp1->next;
	}
	
		if(temp->next==temp1)
	{
		temp3=temp1->next;
		prevX->next=temp1;
		temp1->next=temp;
		temp->next=temp3;
	}
     else if(temp->next&&temp1->next!=NULL)
	{
	   temp2=temp1->next;
	   prevX->next=temp1;
	   temp1->next=temp->next;
	   prevY->next=temp;
	   	temp->next=temp2;
    }
}
	
void insert_sort(int x)
{
	temp=head;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=x;
	temp1->next=NULL;
	
	if(temp==NULL)
	head=temp1;
	
	else if(x<head->data)
	{
		temp1->next=temp;
		temp=temp1;
		head=temp1;
	}

	else 
	{
			temp=temp->next;
	temp2=head;
		while(temp!=NULL)
		{
			if(x>temp->data)
			{
			temp=temp->next;
			temp2=temp2->next;
		    }
			else
			{
				temp2->next=temp1;
				temp1->next=temp;
				break;
			}
			if(temp==NULL)
				temp2->next=temp1;
			
		}
	}
}	
void swapping_data(int x,int y)
{
	temp1=head;
	temp2=head;
	while(temp1->data!=y)
	temp1=temp1->next;
	temp1->data=x;

		while(temp2->data!=x)
	temp2=temp2->next;
	temp2->data=y;
}	
	

void duplicate_delete()
{
	temp=head;
	temp2=head;


while(temp!=NULL)
{

	temp2=temp;
	temp1=temp->next;	
	
	while(temp1!=NULL)
	{
	if(temp1->data==temp->data)	
		{
			temp2->next=temp1->next;
			free(temp1);
			temp1=temp2->next;	
		}
	else
	{
		temp2=temp1;
		temp1=temp1->next;
		
		}	
	}	
temp=temp->next;
}



}
void delete_all(struct node* p)
{ 
  if(p==NULL)
  {
    printf("\n"); 
  }
  else
  {
  	delete_all(p->next);
  	free(p);
  }	
  head=NULL;
}
void delete_data(int x)
{
	int i;
	printf("enter the data");
	scanf("%d",&x);
	temp=head;
	temp1=head;
	temp=temp->next;
	while(temp!=NULL)
	{
		
		if(head->data==x)
		{
			head=temp1->next;
			free(temp1);
			break;
		}
		
		if (temp->data==x)
		{
			temp1->next=temp->next;
			free(temp);
			break;
		}
		temp=temp->next;
		temp1=temp1->next;
	}
}
void last_nth()
{
	int x,i;
	printf("enter the position from last");
	scanf("%d",&x);
	temp=head;
	temp1=head;
	for(i=0;i<x;i++)
	   temp=temp->next;
	while(temp!=NULL)
	{
	   temp1=temp1->next;
	   temp=temp->next;
	}
	printf("%d",temp1->data);
}
void middel()
{
	temp=head;
	temp1=head;
	while(!(temp==NULL || temp->next==NULL))
	{
		temp=temp->next->next;
		temp1=temp1->next;
	}
	printf("%d",temp1->data);
}
void pop()
{
	temp=head;
	head=temp->next;
	free(temp);
}
void reverse_print_recursive(struct node* p)
{
	if(p==NULL)
	{
		printf("\n");
	}
	else
	{
		reverse_print_recursive(p->next);
		printf("%d ",p->data);
		
	}
}
void recursive_print(struct node* p)
{
	if(p==NULL)
	{
		printf("\n");
	}
	else
	{
	printf("%d ",p->data);
	recursive_print(p->next);
}}
void reverse_iterative()
{
	temp=head;
	while(temp!=NULL)
	{
		temp1=temp->next;
		temp->next=prev;
		prev=temp;
		temp=temp1;
	}
	head=prev;
}
void delete_given_no(int pos)
{ 
       
    int i;
    temp=head;
	if(pos==1)
	{
		head=temp->next;
		free(temp);
	}
	else
	{
		temp1=head;
		temp2=head;
        for(i=0;i<pos-2;i++)
	     temp1=temp1->next;
	     temp2=temp1->next;
	     temp1->next=temp2->next;
		free(temp2);
	}
}
void insert_given_no(int x,int pos)
{
	int i;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(pos==1)
	{
		temp->next=head;
		head=temp;
	}
	
	else
	{
	temp2=head;
	for(i=0;i<pos-2;i++)
	{
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;}
	
}
void insert_end(int x)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp;		
	}
	
}

void insert(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void print()
{
	temp=head;
	printf("list is: ");
	while(temp!=NULL)
	{
	
	
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
main()
{
	head=NULL;
	printf("for help press 'help'"); 
	  
	 int d,x,n,i,y,pos;

	 char s[20];
	 while(1)
	 {
	 	printf("\nenter the operation code\n");
		 scanf("%s",s);
	if(strcmp(s,"insert_started")==0)
	 	{
	
		 printf("how many numbers: ");
	 scanf("%d",&n);
		 for(i=0;i<n;i++)
		{
	 	scanf("%d",&x);
	 	insert(x);
	 	}
	 }
	 
	 else if(strcmp(s,"insert_end")==0)
	 {
	 	 printf("how many numbers: ");
	 scanf("%d",&n);
	 
	 	for(i=0;i<n;i++)
		 {
		 scanf("%d",&x);
	 	insert_end(x);
	 	}
	 }
	 else if(strcmp(s,"insert_given_no")==0)
	 {
	 	printf("how many numbers:  ");
	 	scanf("%d",&n);
	 	printf("give data and position");
	 	for(i=0;i<n;i++)
	 	{
	 		scanf("%d%d",&x,&pos);
	 		insert_given_no(x,pos);
		 }
	 }
	 
	 
	 else if(strcmp(s,"delete_given_no")==0)
	 {
	 	printf("given position");
	 	scanf("%d",&pos);
	 	delete_given_no(pos);
	  }
	  
	   
	  else if(strcmp(s,"reverse_iterative")==0)
	  {
	  	reverse_iterative();
	  }
	  
	  else if(strcmp(s,"push")==0)
	  {
	  	printf("enter the no");
	  	scanf("%d",&x);
	  	insert(x);
	  }
	  
	  else if(strcmp(s,"pop")==0)
	  {
	  	pop();
	  }
	  
	  else if(strcmp(s,"last_nth")==0)
	  last_nth();
	  
	  else if(strcmp(s,"delete_data")==0)
	  {
	  	int p;
	  	printf("enter the number");
		  scanf("%d",&p);
		  delete_data(p);
	  }
	  
	  else if(strcmp(s,"delete_all")==0)
	  {
	  	temp=head;
	  delete_all(temp);
      }
      
      else if(strcmp(s,"duplicate_delete")==0)
      duplicate_delete();
      
      else if(strcmp(s,"swapping_data")==0)
      {
      	printf("enter the two data");
      	scanf("%d%d",&x,&y);
      	swapping_data(x,y);
	  }
      else if(strcmp(s,"swapping")==0)
      {
      	printf("enter the two data");
      	scanf("%d%d",&x,&y);
      	swaping(x,y);
	  }
	  else if(strcmp(s,"insert_sort")==0)
	  {
	    printf("enter the data");
	    scanf("%d",&x);
	  	insert_sort(x);
	  }
	  else if(strcmp(s,"recursive_print")==0)
	  {
	  	temp=head;
	    recursive_print(temp);
      }
      
       
	 else if(strcmp(s,"print")==0)
	 print();
	 
	 else if(strcmp(s,"reverse_print_recursive")==0)
	 {
	 	temp=head;
	 	reverse_print_recursive(temp);
	 }
	 else if(strcmp(s,"middel")==0)
	 	middel();
	 	
	 	else if(strcmp(s,"palindrom")==0)
	 	{
		  temp=head;
	 	palindrom(temp);
	    }
	    else if(strcmp(s,"sorted")==0)
	    sorted();
	    else if(strcmp(s,"roted")==0)
	    {
	    	printf("\nenter the position");
	    	scanf("%d",&n);
	    	roted(n);
		}
		else if(strcmp(s,"alternate_delete")==0)
		alternate_delete();
		
		else if(strcmp(s,"reverse_pos")==0)
		{
			printf("\n enter the position");
			scanf("%d",&n);
			reverse_pos(n);
		}
		
		else if(strcmp(s,"delete_LM")==0)
		delete_LM();
		
		else if(strcmp(s,"split_EO")==0)
	    split_EO();
	    
	 	
	 else if(strcmp(s,"help")==0)
	 {
	 	printf("\n1->  insert_started");
	 	printf("\n2->  insert_end");
	 	printf("\n3->  insert_given_no");
	 	printf("\n4->  delete_given_no");
	 	printf("\n5->  reverse_iterative");
	 	printf("\n6->  recursive_print");
	 	printf("\n7->  reverse_print_recursive");
	 	printf("\n8->  print");
	 	printf("\n9->  push");
	 	printf("\n10-> pop");
	 	printf("\n11-> middel                    //find what is middle number");
	 	printf("\n12-> last_nth                  //delete number to given position from last");
	 	printf("\n13-> delete_data");
	 	printf("\n14-> delete_all               //all data will be delete");
	 	printf("\n15-> duplicate_delete");
	 	printf("\n16-> swapping                 //swap node without swapping data");
	 	printf("\n17-> swapping_data");
	 	printf("\n18-> insert_sort              //when list is sorted");
        printf("\n19-> palindrome               //recursive methed");
        printf("\n20-> sorted                   //data will sorted from method bubble sorted");
        printf("\n21-> roted                    //roted data at n position");
        printf("\n22-> alternate_delete         //delete data two wise two");
        printf("\n23-> reverse_pos             //reverse the list of given position");
        printf("\n24-> delete_LM           //delete data if data lessthan of right node");
        printf("\n25->  split_EO          //split data as odd data will come after even data");
        
	 }
     
     
	 else
	 break;
}
	 
	 
	 

	 
	  
}
