#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
    int a[100],b[100],c[100],i,j,k,m,n,p,temp;
    printf("Enter no. of elements in A= ");
    scanf("%d",&m);
    printf("Enter no. of elements in B= ");
    scanf("%d",&n);
    printf("Enter elements of A=\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of B= \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    p=m+n;
    j=0;
    k=0;
    for(i=0;i<p;i++)
    {
        if(j<m && k<n)
        {
            if(a[j]<b[k])
            {
                c[i]=a[j];
                j++;
            }
            else
            {
                c[i]=b[k];
                k++;
            }
        }
        else if(j<m)
        {
            c[i]=a[j];
            j++;
        }
        else
        {
            c[i]=b[k];
            k++;
        }
    }
    printf("Merged array=\n");
    for(i=0;i<p;i++)
    {
        printf("%d ",c[i]);
    }

}
