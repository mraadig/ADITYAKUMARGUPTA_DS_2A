 #include<stdio.h>//ADITYA KUMAR GUPTA
 void main()
 {
    int a[100],i,n,count=0,j,c=0;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter the elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                 c++;
            }
            if(c==0)
            {
                continue;
            }
            else
                printf("element repeated= %d",a[j]);
                break;

        }
        if(c!=0)
        {
            break;

        }

    }
 }
