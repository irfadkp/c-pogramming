#include<stdio.h>
#include<math.h>
void main()
{
int a[100],i,n,c=0,t=0,j;

printf("ENTER n ");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("ENTER a[%d] ",i);
scanf("%d",&a[i]);
}
printf("ENTER element whose occurence is to be found and numbered ");
scanf("%d",&j);

for(i=0;i<n;i++) 
{if(j==a[i])
{t=1;
break;}
}
if(t==1)
{
for(i=0;i<n;i++) 
{if(j==a[i])
{c++;
}
}
printf("THE ELEMENT %d is found and its number of occurences is %d\n",j,c);

}
else
printf("THE ELEMENT %d is not found\n",j);


}



