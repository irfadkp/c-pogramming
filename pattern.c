
#include<stdio.h>
void main()
{
int i,j,k,n,p;
printf("enter the limit");
scanf("%d",&n);
p=n;
for(i=1;i<=p;i++)
{
  for(k=1;k<=n;k++)
   {
    printf(" ");
}
   n--;
  for(j=1;j<=i;j++)
 {
 printf("%d ",j);
 }
printf("\n");
}
}

