                         

#include<stdio.h>
void main()
{
int n,i,p=0;
printf("Enter the number : ");
scanf("%d",&n);
for(i= 2;i<=(n/2);i++)
{
if(n%i==0)
{ p++;
}
}
if(p==0)
{
printf("The number is prime.\n");
}
else
{
printf("The number is not prime.\n");
}
}



