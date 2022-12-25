//ADITYA KUMAR GUPTA
//IT A - 2021B0131131
#include <stdio.h>
void main()
{
  int i, low, high, mid, n,x, a[100];
  printf("how many element");
  scanf("%d",&n);
  printf("Enter the array element");
  for(i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("Enter value to find");
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high) {
    if(a[mid] < x)
    low = mid + 1;
    else if (a[mid] == x) {
    printf("element %d found at location %d", x, mid+1);
    break;
    }
   else
   high = mid - 1;
   mid = (low + high)/2;
   }
   if(low > high)
   printf("Not found! %d not present in the list",x);
   }

