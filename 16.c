#include<stdio.h>
#include<ctype.h>
#include<string.h>


char stack[100];
int top=-1;


void push(char item)
        {
        if(top==100)
                printf("Stack overflow\n");
        else
                {
                top=top+1;
                stack[top]=item;

                }


        }


char pop()
        {char i;
        if(top==-1)
                {printf("Stack underflow\n");}
        else
                {i=stack[top];
                top=top-1;
                return i;
                }
        }

int  isp(char a)
{
if(a=='+'||a=='-')
return 2;
else if(a=='*'||a=='/')
return 4;
else if(a=='^')
return 5;
else if(a=='(')
return 0;
else 
return 0;
}

int  icp(char a)
{
if(a=='+'||a=='-')
return 1;
else if(a=='*'||a=='/')
return 3;
else if(a=='^')
return 6;
else if(a=='(')
return 9;
else if(a==')')
return 0;
else 
return 0;
}
void main()
{int i,n;
char s[100],x,item;
printf("enter infix expression ");
gets(s);
n=strlen(s);
s[n]=')';
push('(');
i=0;
printf("\nPostfix expresiion  ");

while(top>=0)
{item=s[i];
x=pop();
if(isalnum(item))
        {printf("%c ",item);
        push(x);
        }
else if(item==')')
        {while(x!='(')
        {printf("%c ",x);
        x=pop();
        }
        }

else if(isp(x)>=icp(item))
{while(isp(x)>=icp(item))
        {printf("%c ",x);
        x=pop();
        }
push(x);
}
else if(isp(x)<icp(item))
{push(x);push(item);}
else
printf("invalid");
i++;}
printf("\n");
}



