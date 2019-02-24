
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
		

struct node
{ 
	int data;
	struct node* left;
	struct node* right;
};

struct node* root=NULL,*temp1=NULL,*temp2=NULL,*temp3=NULL,*temp4=NULL, *current,*temp5;

struct node* LCA(struct node* temp4,int a,int b)
{
	int max,min;
	if(a>b)
	{
	max=a;
	min=b;
    }
	else
	{
	max=b;
	min=a;
    }  
	
	if(temp4->data > max)
	return LCA(temp4->left,a,b);
	else if(temp4->data < min)
	return LCA(temp4->right,a,b);
	else
	return temp4;
}
int size(struct node* temp4)
{
	if(temp4==NULL)
	return 0;
	else{
	
	int sizeL=size(temp4->left);
	int sizeR=size(temp4->right);
	
	return sizeL+sizeR+1;
    }   
}

  struct node* findmin(struct node* temp3)
  {
  	while(temp3->left!=NULL)
  	temp3=temp3->left;
  	
  	return temp3;
  }
    struct node* find(struct node* temp1,int x)
{
	if(temp1==NULL)
	return NULL;
	
     else if(temp1->data==x)
     return temp1;
     
     else if(temp1->data<x)
     find(temp1->right,x);
	 
	 else if(temp1->data>=x)
	 find(temp1->left,x);
     
     
     
}
struct node* inorder_successor(struct node* temp4,int value)
{
	current=find(temp4,value);
	if(current==NULL)
	return NULL;
	if(current->right!=NULL)
	{
		return findmin(current->right);
	}
	else
	{
		struct node* s1=NULL;
		struct node* a1=temp4;
		
		while(a1!=current)
		{
			if(current->data <= a1->data)
			{
				s1=a1;
				a1=a1->left;
				
			}
			else
			a1=a1->right;
		}
		return s1;
	}
}
int height(struct node* temp4)
{
	int Lheight,Rheight;
	if(temp4==NULL)
	return -1;
	else
	{
		Lheight=height(temp4->left);
		Rheight=height(temp4->right);
		
		if(Lheight>Rheight)
		return Lheight +1;
		else
		return Rheight +1;
		
		
	}
}

void minv()
{
    temp1=root;
	while(temp1->left!=NULL)
	{
		temp1=temp1->left;
	}
	printf("%d",temp1->data);	
}


void maxv()
{
    temp1=root;
	while(temp1->right!=NULL)
	{
		temp1=temp1->right;
	}
	printf("%d",temp1->data);	
}


void preorder(struct node * temp3)
{
	if(temp3!=NULL)
	{
		printf("%d ",temp3->data);
		preorder(temp3->left);
		preorder(temp3->right);
	}
}


void postorder(struct node* temp3)
{
	if(temp3!=NULL)
	{
		
		postorder(temp3->left);
		postorder(temp3->right);
	    printf("%d ",temp3->data);	
	}
}
void inorder(struct node* temp3)
{
	if(temp3!=NULL)
	{
		inorder(temp3->left);
		printf("%d ",temp3->data);
		inorder(temp3->right);
	}
}

    int search(struct node* temp1,int x)
{
	if(temp1==NULL)
	return 2;
	
     else if(temp1->data==x)
     return 1;
     
     else if(temp1->data<x)
     search(temp1->right,x);
	 
	 else if(temp1->data>=x)
	 search(temp1->left,x);
     
     
     
}

struct node* getnode(int x)
{
    temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=x;
	temp1->left=NULL;
	temp1->right=NULL;
	if(root==NULL)
	root=temp1;
	return temp1;
}
struct node* insert(struct node *temp2,int x)
{
	
	if(temp2==NULL)
	{
	getnode(x);
    }
	else
	{
		if(x<=temp2->data)
		temp2->left=insert(temp2->left,x);
		
		else//(x>temp2->data)
		temp2->right=insert(temp2->right,x);
		
	}
	
   	
}


	struct node* deleted(struct node* temp1,int x)
	{
		if(temp1==NULL)
	    return temp1;
		else if(x<temp1->data)
		temp1->left=deleted(temp1->left,x);
		else if(x>temp1->data)
		temp1->right=deleted(temp1->right,x);	
		else
		{
			//case 1 no child
			if(temp1->left==NULL&&temp1->right==NULL)
			{
			free(temp1);
			temp1=NULL;
		    }
			
			//case 2 one child
			else if(temp1->left==NULL)
			{
			struct node* temp2=temp1;
			temp1=temp1->right;
			free(temp2);
		    }
			
			else if(temp1->right==NULL)
			{
			struct node* temp2=temp1;
			temp1=temp1->left;
			free(temp2);
		    }
			
			//case 3 : two childerns
			else
			{
				struct node* temp2=findmin(temp1->right);
				temp1->data=temp2->data;
				temp1->right=deleted(root->right,temp2->data);
				
			}
		}
		return temp1;
		
	}

main()
{
    while(1)
	{
		int x,x1,i,a1;
		printf("\nenter the operation\n");
		char c[15];
		scanf("%s",c);
		if(strcmp(c,"insert")==0)
		{
			printf("how many data you want insert ");
			scanf("%d",&x1);
			
			printf("\nenter the data ");
			for(i=0;i<x1;i++)
			{
			scanf(" %d",&x);
			insert(root,x);
		}}
		else if(strcmp(c,"inorder")==0)
		inorder(root);
		
		else if(strcmp(c,"preorder")==0)
		preorder(root);
		
		else if(strcmp(c,"postorder")==0)
		postorder(root);
		
		else if(strcmp(c,"search")==0)
		{
			printf("\nenter the data ");
			scanf("%d",&x);
		x1=search(root,x);
		if(x1==1)
		printf("\ndata is available");
		else 
		printf("\ndata is not available");
		
	    }
	    
	    else if(strcmp(c,"minv")==0)
	    minv();
	    
	    else if(strcmp(c,"maxv")==0)
	    maxv();
	    
	    else if(strcmp(c,"deleted")==0)
	    {
	    	printf("enter the data ");
	    	scanf("%d",&x);
	    	deleted(root,x);
		}
	    else if(strcmp(c,"height")==0)
	    {
	    	a1= height(root);
	    	printf("%d ",a1);
		}
	    else if(strcmp(c,"inorder_successor")==0)
	    {
	    	int data1;
	    	struct node* a11;
	    	printf("\n enter the data");
	    	scanf("%d",&data1);
	    	a11=inorder_successor(root,data1);
	    	printf("inorder_successor is %d  ",a11->data);
		}
		else if(strcmp(c,"size")==0)
		{
			a1=size(root);
			printf("%d",a1);
		}
	    
	    else if(strcmp(c,"LCA")==0)
	    {
	    	int a,b;
	    	struct node* result;
	    	printf("\nenter the two node ");
	    	scanf("%d%d",&a,&b);
	    	result=LCA(root,a,b);
	    	printf("%d",result->data);
		}
		
		else if(strcmp(c,"help")==0)
		{
		printf("\ninorder                 //L D R");
		printf("\npreorder                //D L R");
		printf("\npostorder               //L R D");
		printf("\nsearch");
		printf("\ninsert");
		printf("\nminv                   //print minimum value");
		printf("\nmaxv                   //print maximu value");
		printf("\ndeleted                 //delete given data");
		printf("\nheight                 //height of BST");
		printf("\ninorder_successor      //finding I.S. in O(h) time");
		printf("\nsize                  //total no. opf nodes");
		printf("\nLCA                 // lowest common ancector ");
	    }
	    else 
		break;
		
    }	
}
