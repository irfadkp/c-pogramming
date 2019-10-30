#include <stdio.h>
void main()
{  
   char c;
   int a,b,s;
   printf("enter the numbers");
   scanf("%d%d",&b,&a);
   printf("enter the charecter");
   scanf("%c",&c);
   switch(c)
       {
          case'+' : s=a+b; 
                    printf("the sum is %d",s);
                    break;
                    printf("the sum is %d",s);
                    break;
          case'-' : s=a-b; 
                    printf("the result is %d",s);
                    break;
          case'*' : s=a*b; 
                    printf("the result is %d",s);
                    break;
          case'/' : s=a/b; 
                    printf("the result is %d",s);
                    break;
               }
}
 
   
