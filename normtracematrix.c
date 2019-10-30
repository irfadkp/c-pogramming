#include<math.h>
#include<stdio.h>
void main()
{
int a[10][10],m,n,i,j,sum=0,norm,trace=0;
printf("Enter the order of matrix: ");
scanf("%d%d",&m,&n);
for(i=0;i<m;++i)
for(j=0;j<n;++j)
{printf("enter  value %d%d ",i,j);
scanf("%d",&a[i][j]);
}
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
{
if(i==j)
trace+=a[i][j];
if(1==1)
sum+=(a[i][j]*a[i][j]);
}
}
printf("Norm Of the Matrix:\n%f\nTrace Of the Matrix:\n%d\n\n ",pow(sum,0.5),trace);
}


