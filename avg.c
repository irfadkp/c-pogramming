#include<stdio.h>
void main()
{
 int n,num,sum=0,avg,pos=0;
 printf("enter the limit:");
 scanf("%d",&n);
 int i=0;
 while(i<n)
     {
  scanf("%d",&num);
  if(num>0)
  { sum+=num;
    pos++;
        }
  i++;
 }
avg=sum/pos;
printf("%d",avg);
}

