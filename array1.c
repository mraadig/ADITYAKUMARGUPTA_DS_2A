#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
    int a[100],i,n;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in the array=\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
