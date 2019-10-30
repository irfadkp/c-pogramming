#include<stdio.h>
#include<stdlib.h>
 struct node
{    int data;
     struct node *link;
};
void main()
{
    int n,i,x,z,flag=0;
    struct node *strnode,*temp,*ptr;
    printf("enter the number of elements");
    scanf("%d",&n);
    strnode=(struct node*)malloc(sizeof(struct node));
    strnode->link=NULL;
    strnode->data=0;
    ptr=strnode;
    printf("enter elements");
    for(i=0;i<n;i++)
       {
          temp=(struct node*)malloc(sizeof(struct node));
          scanf("%d",&x);
          temp->link=NULL;
          temp->data=x;
          ptr->link=temp;
          ptr=ptr->link;
          }
        ptr->link=strnode;
        ptr=strnode->link;
     do{ 
          printf("%d",ptr->data);
          printf(" ");
          ptr=ptr->link;
        }while(ptr!=strnode);
      printf("enter the element you want to search\n");
      scanf("%d",&z);
     ptr=strnode;
    for(i=0;i<n;i++)
         {
               if(ptr->data==z)
                 {
       
                   flag=1;
                   break;
                 }
               ptr=ptr->link;
               i++;
         }      

    if(flag>0)
      printf("key found");
    else
     printf("KEY NOT FOUND");
      }

