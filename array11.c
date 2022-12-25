#include<stdio.h>//ADITYA KUMAR GUPTA
int main()
{
 int a[100],b[100],c[100],m,n,i,j,found=0,p=0;
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
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
        if(a[i]==b[j])
            found=1;
    }
    if(found==0)
    {
         c[p]=a[i];
        p++;
    }
    found=0;
 }
 printf("Difference =\n");
 for(i=0;i<p;i++)
 {
    printf("%d ",c[i]);
 }
 return 0;
}
