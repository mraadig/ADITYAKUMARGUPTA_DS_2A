#include<stdio.h>
void main()  //ADITYA KUMAR GUPTA
{
    int a[100][100],b[100][100],c[100][100],i,j,m,n,p,q;
    printf("enter row of a= ");
    scanf("%d",&m);
    printf("enter column of a= ");
    scanf("%d",&n);
    printf("enter row of b= ");
    scanf("%d",&p);
    printf("enter column of b= ");
    scanf("%d",&q);
    printf("enter elements in a=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter elements in b=\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("MATRIX ADDITION=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
