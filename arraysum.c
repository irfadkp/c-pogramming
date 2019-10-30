#include<stdio.h>
int main()
{
 int a[50],n,sum=0,i;
  printf("enter the limit of array :");
  scanf("%d",&n);
  printf("Enter the values \n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
 printf("The sum of numbers in array is %d",sum);
 return 0;
}


