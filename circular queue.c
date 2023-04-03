#include<stdio.h>
#define MAX 5
typedef struct Q{
int rear;
int front;
int elements[MAX];
}queue;

void initialise(queue *pq);
int empty(queue *pq);
int full(queue *pq);
void enqueue(queue *pq,int);
int dequeue(queue *pq);
void display(queue *pq);
void main()
{
    queue q;
    q.front=-1;
    q.rear=-1;
    int choice,num;
    while(1)
    {
        printf("1.Insert queue\n2.Delete queue\n3.Display\n4.Exit\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter a value\n");
                   scanf("%d",&num);
                   if(full(&q))
                   {
                    printf("Q is full");
                   }
                   else{
                    enqueue(&q,num);
                   }
                   break;
            case 2:if(!empty(&q))
                   {
                       num=dequeue(&q);
                       printf("deleted data=%d",num);
                   }
                   else
                   {
                       printf("q is empty\n");
                       break;
                   }
            case 3:display(&q);
                   break;
            default:exit(1);
        }
    }
}
int empty(queue *pq)
{
    if(pq->rear==-1)
    return(1);
    return(0);
}
int full(queue *pq)
{
    if((pq->rear+1)%MAX==pq->front);
    return(1);
    return(0);
}
void enqueue(queue *pq,int x)
{
    if(pq->rear==-1)
        pq->rear=pq->front=0;
    else
        pq->rear=(pq->rear+1)%MAX;
        pq->elements[pq->rear]=x;
}
int dequeue(queue *pq)
{
    int x;
    x=pq->elements[pq->front];
    if(pq->rear==pq->front)
    {
        pq->rear=-1;
        pq->front=-1;
    }
    else
    {
        pq->front=(pq->front+1)%MAX;
        return(x);
    }
}
void display(queue *pq)
{
    int i;
    if(empty(pq))
    {
        printf("Queue empty\n");
        return;
    }
    for(i=pq->front;i!=pq->rear;i=(i+1)%MAX)
    {
        printf("%d ",pq->elements[i]);
    }
    printf("%d ",pq->elements[i]);
}
