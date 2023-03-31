#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int capacity;
    int top;
    int *arr;
};

int isEmpty(struct stack *s)
{
    if(s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *s)
{
    if(s->top==(s->capacity-1))
        return 1;
    else
        return 0;
}

void push(struct stack *s)
{
    printf("Enter the value to be pushed into stack\n");
    int k;
    scanf("%d",&k);
    if(isFull(s))
    {
        printf("stack overflow\n");
    }
    else
    {
        s->arr[++s->top]=k;
    }
}
void pop(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("stack empty\n");
    }
    else
    {
        printf(" %d popped ",s->arr[s->top]);
        s->top--;
    }
}
int main()
{
    struct stack s;
    s.top=-1;
    printf("Enter size of stack:");
    int k;
    scanf("%d",&k);
    s.capacity=k;
    s.arr=(int*)malloc(s.capacity*sizeof(int));
    while(1)
    {
        int ch;
        printf("Enter 1.To push 2.To pop 3.To peek 5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push(&s);
                   break;
            case 2:pop(&s);
                   break;
            case 3:printf(" %d ",s.arr[s.top]);
                   break;
            case 5:exit(0);
                   break;
        }
    }
}
