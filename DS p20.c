#include<stdio.h> //ADITYA KUMAR GUPTA //2100320130020
void main()
{
    int i,j,a[100],n,temp;
    printf ("Enter the no. elements:-");
    scanf("%d", &n);
    printf ("Enter the elements of Array:-\n");
    for (i=0; i<n; i++)
        {
          scanf("%d",&a[i]);
        }
          for (i=1;i<n;i++)
              {
                  j=i;
                while (j>0&&a[j-1]>a[j])
                {
                  temp=a[j];
                  a[j]=a[j-1];
                  a[j-1]=temp;
                  j--;
                }
              }
              printf("The sorted Array are:-\n");
              for (i=0; i<n; i++)
                {
                    printf("%d ",a[i]);
                }
}


