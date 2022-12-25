//ADITYA KUMAR GUPTA
//IT A - 2021B0131131
#include<stdio.h>
void main()
{
   int a[100],i,n,x,flag,j;
   printf("how many element");
   scanf("%d",&n);
   printf("Enter the array element");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("enter the element to be search");
   scanf("%d",&x);
   for(i=0;i<=n;i++)
   {
   if(a[i]==x)
   {
       flag=1;
       j=i+1;
   }
   }
    if(flag==1)
    {
   printf("element found at index%d",j);
   }
    else
        printf("element not found");
}
