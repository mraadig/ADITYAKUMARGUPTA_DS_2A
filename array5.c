#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
    int a[100],i,n,sum,sumb,b;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements=\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=(n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        sumb=sumb+a[i];
    }
    b=sum-sumb;
    printf("The missing number is = %d",b);
}
