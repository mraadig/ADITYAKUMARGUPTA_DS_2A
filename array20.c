#include<stdio.h> //ADITYA KUMAR GUPTA
void main()
{
    int a[10][10],n,i,j,det=0;
    printf("Enter elements for 3X3 Matrix=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The determinant is= \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            det=a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
        }
    }
    printf("%d",det);
}
