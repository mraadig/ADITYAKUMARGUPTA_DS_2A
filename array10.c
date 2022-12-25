#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
 int a[100],b[100],c[200],i,j,m,n,k,found=0,p=0;
 printf("Enter no. of elements in A=\n");
 scanf("%d",&m);
 printf("Enter no. of elements in B=\n");
 scanf("%d",&n);
 printf("Enter elements of A=\n");
 for(i=0;i<m;i++)
{
     scanf("%d",&a[i]);
}
 printf("Enter elements of B=\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&b[i]);
 }
 p=0;
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
          if(b[i]==a[j])
               found=1;
     }
     if(found==1)
     {
          c[p]=b[i];
          p++;
     }
     found=0;
 }
 printf("Intersection=\n");
 for(i=0;i<p;i++)
 {
     printf(" %d ",c[i]);
 }
}
