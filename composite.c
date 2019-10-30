#include<stdio.h>
void main()
{
int i,j;
for(i=10;i<=50;++i)
{
for(j=2;j<i;++j)
{if(i%j==0)
{printf("%d",i);break;}}
printf(" ");
}

}


