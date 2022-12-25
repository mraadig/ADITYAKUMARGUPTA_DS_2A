#include<stdio.h>
#include<stdlib.h> //ADITYA KUMAR GUPTA 2100320130020
typedef struct nodetype
{
    int info;
    struct nodetype*next;
}node;
node*temp;
node*ptr;
node*start=NULL;
void creat()
{
    int ch;
    printf("enter any choice to con.and 1 to end\n");
    scanf("%d",&ch);
    while(ch!=1)
    {
    temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("overflow condition");
        return;
    }
    printf("enter the info\n");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
        ptr=temp;
    }
    else{
        ptr->next=temp;
        ptr=temp;
    }
    printf("enter any no. to continue and 1 for end\n");
    scanf("%d",&ch);
    }
}
void display()
    {
        if(start==NULL)
        {
            printf("\nnothing to display\n");
            return;
        }
        ptr=start;
        printf("the entered info is\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->info);
            ptr=ptr->next;
        }
    }
void insertbeg()
{
 temp=(node*)malloc(sizeof(node));
 if(temp==NULL)
 {
    printf("overflow");
    return;
 }
 printf("enter info\n");
 scanf("%d",&temp->info);
 temp->next=NULL;
 if(start==NULL)
 {
    start=temp;
 }
 else{
    temp->next=start;
    start=temp;
 }
}
void insertend()
{ ptr=temp;
temp=(node*)malloc(sizeof(node));
 if(temp==NULL)
 {
    printf("overflow");
    return;
 }
 printf("enter info\n");
 scanf("%d",&temp->info);
 temp->next=NULL;
 if(start==NULL)
 {
    start=temp;

 }
 else{
    while(ptr->next!=NULL)
    {
    ptr=ptr->next;
 }
 ptr->next=temp;
}
}
void insertpos()
{
    int pos;
ptr=temp;
temp=(node*)malloc(sizeof(node));
 if(temp==NULL)
 {
    printf("overflow");
    return;
 }
 printf("enter info\n");
 scanf("%d",&temp->info);
 temp->next=NULL;
 printf("enter the choice");
 scanf("%d",&pos);
 if(pos==1)
 {
    temp->next=start;
    start=temp;

 }
 else{
    ptr=start;
   for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
        if(ptr=NULL)
        {
            printf("position not found");
        }
 }
 temp->next=ptr->next;
 ptr->next=temp;
 printf("insertion done sucessfully");
}
}
void delbeg()
{
ptr=start;
 if(start==NULL)
 {
  printf("nothing to delet");
  return;
 }
 else if(start->next==NULL)
 {
    start=NULL;
    printf("the deleted element is-%d",ptr->info);
    free(ptr);
 }
 else
 {
    start=start->next;
    printf("the deleted element is%d",ptr->info);
    free(ptr);
}
}
void delend()
{ node*prev;
    ptr=start;
 if(start==NULL)
 {
  printf("nothing to delet");
  return;
 }
 else if(start->next==NULL)
 {
    start=NULL;
    printf("the deleted element is-%d",ptr->info);
    free(ptr);
 }
 else
 {
    while(ptr->next!=NULL)
 {
    prev=ptr;
    ptr=ptr->next;
  }
   printf("the deleted element is%d",ptr->info);
   prev->next=NULL;
    free(ptr);
    }
}
void delpos()
{
    node*prev;
  int pos;
 ptr=start;
 printf("enter the position from zero onward");
 scanf("%d",&pos);
 if(start==NULL)
 {
  printf("nothing to delet");
  return;
 }
 else if(pos==1)
 {
    start=ptr->next;
    ptr->next=NULL;
    free(ptr);
 }
 else{
   int i=1;
 while(i<pos)
{   prev=ptr;
     ptr=ptr->next;
    if(ptr==NULL)
        {
            printf("position not found");
        }
   i++;
 }
 prev->next=ptr->next;
 printf("the deleted element is%d",ptr->info);
 ptr->next=NULL;
 free(ptr);
 }
}
void main()
{  int ch;
do{
    printf("\nenter 1 for creat,2 for display,3 for insertbeg,4 for insertend,5 for insertpos,6 for delbeg,7 for delend,8 for delpos,9 for exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
         creat();
          break;
        case 2:
         display();
          break;
        case 3:
         insertbeg();
         break;
        case 4:
         insertend();
         break;
        case 5:
        insertpos();
        break;
        case 6:
        delbeg();
        break;
        case 7:
        delend();
        break;
        case 8:
        delpos();
        break;
        case 9:
         printf("sucessfully exited");
         return;
         break;
        default:
        printf("enter vailed choice");
        break;

    }
}while(ch!=0);
}

