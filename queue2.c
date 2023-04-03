#include<stdio.h>
#include<stdlib.h>
#define QSIZE 4
struct queue
{
    int front;
    int rear;
    int items[QSIZE];
};
typedef struct queue QUEUE;
int main()
{
    QUEUE q;
    q.rear=-1;
    q.front=0;
    int choice=0;
    printf("Press 1-Enqueue\n 2-Dequeue\n 3-Display\n 4-Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue(&q);
                   break;
            case 2:dequeue(&q);
                   break;
            case 3:display(q);
                   break;
            case 4:exit(0);
        }
    }
}
int full(QUEUE *q)
{
    if(q->rear==QSIZE-1)
        return 1;
    else
        return 0;
}
int empty(QUEUE *q)
{
    if(q->front>q->rear)
        return 1;
    else
        return 0;
}
void enqueue(QUEUE *q)
{
    if(full(q))
    {
        printf("queue is full\n");
    }
    int x;
    printf("enter the element:\n");
    scanf("%d",&x);
    q->rear++;
    q->items[q->rear]=x;
}
void dequeue(QUEUE *q)
{
    if(empty(q))
    {
        printf("queue is empty\n");
    }
    int x;
    x=q->items[q->front];
    q->front++;
}
void display(QUEUE q)
{
    if(empty(&q))
    {
        printf("queue is empty\n");
        return;
    }
    int i;
    for(i=q.rear;i>=0;i--)
    {
        printf("%d\n",q.items[i]);
    }
}
