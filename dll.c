# include<stdio.h>
# include<stdlib.h>
struct node
{
	int data ;
	struct node* next ;
	struct node* prev ;
} ;
typedef struct node*NODE ;


NODE insert(int ele,NODE head)
{
	NODE p=(NODE)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("memory not allocated") ;
		return head ;
	}
	p->data=ele ;
	if(head==NULL)
	{
		p->next=NULL ;
		p->prev=NULL ;
		head=p ;
		return head ;
	}
	NODE q=head ;
	while(q->next!=NULL)
	{
		q=q->next ;
	}
	p->next=NULL ;
	p->prev=q ;
	q->next=p ;
	return head ;
}
NODE insertl(int ele,NODE head,int ref)
{
	NODE p=(NODE)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("memory not allocated") ;
		return head ;
	}
	p->data=ele ;
	if(head==NULL)
	{
		printf("list is empty \n") ;
	}
	NODE q=head ;
	while(q!=NULL&&q->data!=ref)
	{
		q=q->next ;
	}
	if(q==NULL)
	{
		printf("element not found \n") ;
	}
	else if(q==head)
	{
		p->next=q ;
		q->prev=NULL ;
		p->next=q ;
		head=p ;
		return head ;
	}
	
	else
	{
		NODE r=q->prev ;
		r->next=p ;
		q->prev=p ;
		p->next=q ;
		p->prev=r ;
		return head ;
	}
	return head ;
}
NODE del(int ele,NODE head)
{
	NODE r=NULL ;
	NODE p=NULL ;
	if(head==NULL)
	{
		printf("the list is empty \n") ;
	}
	NODE q=head ;
	while(q!=NULL&&q->data!=ele)
	{
		q=q->next ;
	}
	if(q==NULL)
	{
		printf("element not found \n") ;
	}
	else if(q->next==NULL)
	{
	    p=q->prev ;
	    p->next=NULL ;
	}
	else if(q==head)
	{
		if(head->next==NULL)
		{
			head=NULL ;
			return head ;
		}
		else
		{
			r=q->next;
			r->prev=NULL ;
			head=r ;
			return head ;
		}
	}
	 
	else
	{
		p=q->prev ;
	 	r=q->next ;
		p->next=r ;
		r->prev=p ;
	}
	return head ;
}
void disp(NODE head)
{
	NODE q=head ;
	if(head==NULL)
	{
		printf("the list is empty \n") ;
	}
	while(q!=NULL)
	{
		printf("%d\n",q->data) ;
		q=q->next ;
	}
}
int main()
{
	NODE head=NULL ;
	int ch,ele,ref ;
	printf("enter your choice 1 for inserting a node \n 2 for inserting to the left\n 3 for deleting a specific element \n 4 to display \n 0 to exit \n") ;
	scanf("%d",&ch) ;
	while(ch!=0)
	{
		if(ch==1)
		{
			printf("enter the element to be inserted \n") ;
			scanf("%d",&ele) ;
			head=insert( ele, head) ;
		}
		if(ch==2)
		{
			printf("enter the element to be inserted \n") ;
			scanf("%d",&ele) ;
			printf("enter the reference element \n") ;
			scanf("%d",&ref) ;
			head=insertl(ele,head,ref) ;
		}
		if(ch==3)
		{
			printf("enter the element to be deleted \n") ;
			scanf("%d",&ele) ;
			head=del(ele, head) ;
		}
		if(ch==4)
		{
			printf("the elements are \n") ;
			disp(head) ;
		}
		printf("enter your choice \n") ;
		scanf("%d",&ch) ;
	}
	
	return 0 ;
}	
