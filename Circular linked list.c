#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
 struct node *next;
}*head,*last,*new,*temp;
int c=0;
 void creat()
 {
int d;
do
{
printf("enter number");
scanf("%d",&d);
	new=malloc(sizeof(struct node));
	new->data=d;
	new->next=NULL;
if(head==NULL)
{
	head=new;
	last=new;
	++c;
}	
else
{
	last->next=new;
	new->next=NULL;
	last=new;
	++c;
}
}while(d!=999);
last->next=head;
}
void pri()
{
int nn=0;
	temp=head;
while(nn!=c)
	{
	printf("%d",temp->data);
	temp=temp->next;
	++nn;
}

}


void inser()
{
int d;
printf("enter new elements");
scanf("%d",&d);
	new=malloc(sizeof(struct node));
	new->data=d;
	new->next=head;
	last->next=new;
	last=new;
++c;
}
int main()
{
printf("last number should be999\n");
	creat();
	
	inser();
	
	pri();
return 0;
}
	



//insertion at last circular linked list