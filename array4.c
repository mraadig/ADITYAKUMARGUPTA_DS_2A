#include<stdio.h>//ADITYA KUMAR GUPTA
void main()
{
    int a[100],i,n,b,c,m,k;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no. of elements to delete= ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Enter the element= ");
        scanf("%d",&b);
        for(int j=0;j<n;j++)
            {
                if(a[j]==b)
                {
                    c=j;
                    break;
               }
            }
        for(k=c;k<n;k++)
        {
            a[k]=a[k+1];
        }
        n=n-1;

    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
