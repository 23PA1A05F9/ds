#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node
{
int data;
struct node *next;
}*temp,*newnode,*head,*last;
int c=0;
void created() 
{
int d;
do{
printf("enter\n");
scanf("%d",&d);
newnode=malloc(sizeof(struct node));
newnode->data=d;
newnode->next=NULL;
if(head==NULL) 
{
head=newnode;
last=newnode;
c++;
}
else
{
last->next=newnode;
last=newnode;
c++;
}

}while(d!=999);

last->next=head;
}
void pri() 
{
int nn=0;
temp=head;
/*do
{
printf("%d",temp->data);
temp=temp->next;

}*/while(nn!=c)
{

printf("%d\n",temp->data);
temp=temp->next;
nn++;
}

}
void delete () 
{
if(head==NULL){
printf("list is empty");
}

else{

temp=head;
head=temp->next;
free(temp);
}
}
int main()


{
double sec;
clock_t star, end;
star =clock();

printf("last number is 999");
created();

pri();
end=clock();
sec=(double)end-star;
printf("time=%f\n",sec);
return 0;
}