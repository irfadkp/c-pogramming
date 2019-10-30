#include<stdio.h>
void main()
{
 int a[50],large,small,n,i;
 printf("Enter the limit of array :");
 scanf("%d",&n);
 printf("Enter the values");
 for (i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 small=a[0];
 for (i=1;i<n;i++)
  {
   if (a[i]<small)
      small=a[i];
  }
 printf("The smallest number is %d \n",small);
 large=a[0];
 for (i=1;i<n;i++)
  {
   if (a[i]>large)
      large=a[i];
  }
 printf("The largest  number is %d \n",large);
}




