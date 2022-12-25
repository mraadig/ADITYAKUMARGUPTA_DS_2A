#include<stdio.h> //ADITYA KUMAR GUPTA
void main(){
    int a[100][100],i,j,k,m,n,temp;
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
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
