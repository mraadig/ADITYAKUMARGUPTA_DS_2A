#include<stdio.h>    //ADITYA KUMAR GUPTA
void main()          //2100320130020
{ int a[100],n,i,j,min,p,t;
  printf("enter the no. of element");
  scanf("%d",&n);
  printf("Enter the no. of elements in array");
  for (i=0; i<n; i++)
     {
       scanf("%d", &a[i]);
     }
     for (i=0; i<n-1; i++)
     {
         min=a[i];
          p=i;
          for(j=i+1; j<n; j++)
        {
           if (a[j] <min)
        {  min=a[j];
               p=j;
               }}
           t=a[i];
           a[i]=a[p];
           a[p] =t; }
        printf("The sorted Array is\n");
        for (i=0; i<n; i++)
        {
         printf("%d ", a[i]);
        }
}
