+//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }



                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }



        }














//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }




//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }




//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }




//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }




//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }



//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
//Evaluation of Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

void main()
{
           int n,i=0,top=-1,x,y;
           char A[50],R[50],item;
           printf("\n Enter the Postfix Expression : ");
           gets(A);
           n=strlen(A);
           A[n]='#';
           item=A[0];
           while(item!='#')
                   { 
                    i++;
                    if(isdigit(item))
                         {  top++;
                             R[top]=item;
                         }
                     else
                        {
                         switch(item)
                                {
                                 case '+' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x+y+'0';
                                            break;
                                 case '-' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x-y+'0';
                                            break;
                                 case '*' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }



          printf("\n");
        }



                                            R[top]=x*y+'0';
                                            break;
                                 case '/' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x/y+'0';
                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                                                   case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n Wrong Expression!! ");
                                 }
                        }
                        item=A[i];
                 }

          printf("\n The Value is : %d ",R[top]-'0');
          top--;
          printf("\n");
        }



                                            break;
                                 case '%' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=x%y+'0';
                                            break;
                                 case '^' : y=R[top]-'0';
                                            top--;
                                            x=R[top]-'0';
                                            R[top]=pow(x,y)+'0';
                                            break;
                                  default : printf("\n
