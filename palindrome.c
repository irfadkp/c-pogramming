#include<stdio.h> include<string.h>
void main()
{
char str[100];
int i,l,t=1;
printf("ENTER STRING ");
gets(str);
l=strlen(str);
for(i=0;i<=l/2;i++)
{if(str[i]!=str[l-i-1])
{t=0;break;}
}
if(t==1)
printf("THE STRING IS PALINDROME\n");
else
printf("THE STRING IS NOT PALINDROME\n");}




