#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
    int a[100],i,n,c=0,b,m;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
    }
    printf("Enter the no. of elements to insert= ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b);
        a[c]=b;
        c++;
        n=n+1;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
