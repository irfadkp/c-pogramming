#include<stdio.h>
void main()
{
int n,a[100],i,c=0;
float sum,avg;
sum=0;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
{
sum=sum+a[i];
c++;
}
}
avg=sum/c;
printf("Average of positive numbers is : %f\n",avg);
}

