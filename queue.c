#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void insert(int);
void delete();
void display();

void main()
{
    int ch,value;
    while(1)
    {
        printf("PRESS 1.To insert 2.To delete 3.To display 4.To exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter value\n");
                   scanf("%d",&value);
                   insert(value);
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
        }

    }

}
void insert(int value)
{
    struct Node *newn;
    newn=(struct Node *)malloc(sizeof(struct Node));
    newn->data=value;
    newn->next=NULL;
    if(front==NULL)
    {
        front=rear=newn;
    }
    else
    {
        rear->next=newn;
        rear=newn;
    }
    printf("insertion success\n");
}
void delete()
{
    if(front==NULL)
    {
        printf("queue empty\n");
    }
    else
    {
    struct Node *temp=front;
    front=front->next;
    free(temp);
    }
}
void display()
{
    if(front==NULL)
    {
        printf("queue is empty\n");
    }
    struct Node *cur=front;
    while(cur->next!=NULL)
    {
        printf("%d->",cur->data);
        cur=cur->next;
    }
    printf("%d\n",cur->data);
}
