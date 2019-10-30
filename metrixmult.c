#include<stdio.h>
void main()
{
int a[10][10],b[10][10],p,q,i,j,m,n,k,c[10][10];
printf("Enter the order of first matrix : ");
scanf("%d%d",&m,&n);
printf("Enter the order of second matrix : ");
scanf("%d%d",&p,&q);
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
c[i][j]=0;
}
}
if(n==p)
{
printf("Enter the first matrix  elements : ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the second matrix elements : ");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{for(j=0;j<q;j++)
{for(k=0;k<n;k++)
{c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf(" \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d  ",c[i][j]);
}
printf("\n");
}
}


}
