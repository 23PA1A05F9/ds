#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
 struct node *next;
 }*head,*last,*new,*temp,*t1;

void creat()
{
int d;
do{

 printf("enter ");
 scanf("%d",&d);
	new=malloc(sizeof(struct node));
  new->data=d;
 new->next=NULL;
     if(head==NULL)
{
 head=new;
   last=new;
}
 else
{
last->next=new;
last=new;
 }
 }while(d!=999);
 }

void Prt()
{
temp=head;
while(temp!=NULL);
 {
printf("%d",temp->data);
temp=temp->next;
 }
}
void ins()
{
int d;
printf("enter the data");
scanf("%d",&d);
 
temp=head;

 


  new=malloc(sizeof(struct node));
new->data=d;
  new->next=temp;
 new=head;
}
 void dele()
{
 temp=head;
 
  head=temp->next;
  free(temp);
  }
 void indl()
 {
 int d;
 	printf("enter the data");
 	scanf("%d",&d);
 
 new=malloc(sizeof(struct node));
   new->data=d;
  last->next=new;
  new->next=NULL;
	 last=new;
 }
void dl()
 {
 temp=head;
   while(temp->next !=NULL);
 	{
 	t1=temp;
 	temp=temp->next;
 }
	 free(temp);
	 t1->next=NULL;
 last=t1;
 }

int main()
{
int n;


	printf("ENTER 1 FOR  NEW HEAD\n");
	printf("ENTER 2 FOR HEAD DELECTION\n");
	printf("ENTER 3 FOR NEW LAST\n");
	printf("ENTER 4 FOR LAST DELECTION\n");
	printf("----------------NOTE:Last element should be 999-------\n");
 	scanf("%d",&n);
if(n==1)
{
creat();
ins();
Prt(); 	
  }
  else if(n==2)
  {
  creat();
  dele();
  Prt;
}
else if(n==3)
{
creat();
indl();
Prt();
}

	else if(n==4)
	{
creat();
dl();
Prt();
}

else
{
	printf("not found");
}

return 0;
}