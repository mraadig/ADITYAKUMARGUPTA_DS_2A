#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
    int a[100],i,b,n,c;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to insert= ");
    scanf("%d",&b);
    i=0;
    while(i<n && b>=a[i])
    {
        i++;
        c=i;
    }
    for(i=n;i>c;i--)
    {
        a[i]=a[i-1];
    }
    a[c]=b;
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
