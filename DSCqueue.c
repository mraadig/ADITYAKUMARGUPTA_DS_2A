//ADITYA KUMAR GUPTA
//2100320130020
#include<stdio.h>
#define maxsize 5
int cqueue[maxsize],front=-1,rear=-1;
void cqinsert();
void cqdelete();
void cqdisplay();
void main()
{
    int ch=1,choice;
    printf ("Queue OPERATIONS:\n");
    while (ch)
    {
        printf ("---------------------------------\n");
        printf ("      1    FOR   INSERT   \n");
        printf ("      2    FOR    DELETE    \n");
        printf ("      3    FOR    DISPLAY\n");
        printf ("      4    FOR    EXIT   \n");
        printf ("--------------------------------- \n");

        printf ("Enter your choice: ");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            cqinsert();
            break;
        case 2:
            cqdelete();
            break;
        case 3:
            cqdisplay();
            break;
        case 4:
            printf("Program Exits");
            return;
        default:
            printf("Wrong Choice\n");
        }
        printf ("Do you want to continue(enter 0 or 1)?\n");
        scanf    ("%d", &choice);
    }
}

void cqinsert()
{
    int n;
   if(front==(rear+1)%maxsize)
   {
    printf("Queue Overflow\n");
    return;
   }
   printf("Enter the element= ");
   scanf("%d",&n);
   if(front==-1)
   {
    front=rear=0;
    cqueue[rear]=n;
   }
   else
   {
    rear=(rear+1)%maxsize;
    cqueue[rear]=n;
   }
   cqinsert();

}

void cqdelete()
{
    int n;
    if (front==-1)
    {
        printf ("Queue Underflow\n");
        return;
    }
    n = cqueue[front];
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front = (front+1)%maxsize;
    }
    printf ("Deleted element is = %d \n",n);
    return;
}

void cqdisplay()
{
    int i=front;
    if (front == -1)
    {
        printf ("Queue is empty\n");
        return;
    }
    else
    {
        printf ("\nThe elements of queue are=\n");
        while (i!=rear)
        {
            printf("%d ",cqueue[i]);
            i=(i+1)%maxsize;
        }
        printf("%d",cqueue[rear]);
    }
    printf ("\n");
}
