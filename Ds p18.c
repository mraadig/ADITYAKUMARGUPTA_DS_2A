#include<stdio.h>//ADITYA KUMAR GUPTA//2100320130020
void main()
{
    int a [100],i,j, n, temp;
    printf ("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for (i=0;i<n-1;i++)
  {
      for(j=0; j<n-1-i; j++)
  {   if(a[j]>a[j+1])
  {   temp=a[j];
      a[j] = a[j+1];
      a[j+1]=temp; }
  }
}
printf ("The sorted Array is\n");
for(i=0; i<n; i++)
{
printf("%d ", a[i]);
}}
