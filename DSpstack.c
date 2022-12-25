#include<stdio.h>
#define max 5
//ADITYA KUMAR GUPTA
//2100320130020
struct QUEUE
{
    int queue[max];
    int front;
    int rear;
}Q;
void enqueue()
{
    if(Q.front==-1)
        {
            Q.rear=0;
            Q.front=0;
        }
    if(Q.rear==max-1)
        printf("Queue over flow\n");
    else
        {
            int z;
            scanf("%d",&z);
            Q.queue[Q.rear]=z;
            Q.rear=Q.rear+1;
        }
}
void dequeue()
{
    if(Q.front==-1)
        printf("Underflow\n");
    int k=Q.queue[Q.front];
    printf("%d deleted element\n",k);
    if(Q.front==Q.rear)
        Q.front=Q.rear=-1;
    else
        Q.front=Q.front+1;
}
void show()
{
    if(Q.rear==-1)
        printf("Queue is empty\n");
    for(int i=Q.front;i!=Q.rear;i++)
        printf("%d \n",Q.queue[i]);
}
void main()
{
    int n;
    printf("1:ENQUEUE\n");
    printf("2:DEQUEUE\n");
    printf("3:SHOW\n");
    printf("4:EXIT\n");
    Q.front=-1;
    Q.rear=-1;
    a1:
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter element\n");
            enqueue();
            goto a1;
        case 2:
            dequeue();
            goto a1;
        case 3:
            show();
            goto a1;
        case 4:
            exit(0);}}

