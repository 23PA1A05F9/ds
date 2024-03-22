#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*pre;
} *newnode,*head,*last,*temp;



void creat()
{
    int e;
    do
    {
        printf("enter");
        scanf("%d",&e);
        newnode=malloc(sizeof(struct node));
        newnode->data=e;
        newnode->next=NULL;
        newnode->pre=NULL;
        if(head==NULL)
        {
            head=newnode;
            last=newnode;

        }
        else
        {
            last->next=newnode;
            newnode->pre=last;
            last=newnode;
        }
    } while(e!=999);

}
void pri()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void ins()
{
    int d;
    printf("enter new data");
    scanf("%d",&d);
    newnode=malloc(sizeof(struct node));
    newnode->data=d;
    newnode->pre=NULL;
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
}
int main()
{
    creat();
    ins();
    pri();
    return 0;
}