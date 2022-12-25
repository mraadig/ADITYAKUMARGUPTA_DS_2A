#include<stdio.h> //ADITYA KUMAR GUPTA
void main()
{
    int a[100][100],b[100][100],i,j,m,n,p,q;
    printf("enter row of a= ");
    scanf("%d",&m);
    printf("enter column of a= ");
    scanf("%d",&n);
    printf("enter elements in a=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix A is =\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
