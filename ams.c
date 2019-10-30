#include<stdio.h>
#include<math.h>
int main()
{
  int num,num1,num2,sum=0,i=0,a,b;
  printf("Enter the number to be checked :");
  scanf("%d",&num);
  num1=num;
  while (num1>0)
    {
     a=num1%10;
     num1=num1/10;
     i++;
    }
  num2=num;
  while (num2>0)
    {
     b=num2%10;
     sum=sum+pow(b,i);
     num2=num2/10;
    }
  if (sum==num)
    {
      printf("The number is Armstrong");
    }
  else
    {
      printf("The number is not armstrong");
    }
  return 0;
}



