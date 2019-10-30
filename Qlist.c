#include<stdio.h>
#include<stdlib.h>
typedef struct node1
        {
                int data;
                struct node1 *link;
        }node;
void push(node *h,int item)
        {node *p,*r,*n;
        n=(node*)malloc(sizeof(node));
        r=(node*)malloc(sizeof(node));

        n->data=item;
        n->link=NULL;
        if(h->link==NULL)
        {h->link=n;
        r=n;
        p=h->link;
        while(p!=NULL)
                {printf("%d ",p->data);
                p=p->link;}
        printf("\n");
                        }
        else
        {
        {p=h->link;
         while(p->link!=NULL)
                {
                p=p->link;}
        r=p;

        r->link=n;
        r=n;
        }
        printf("\nqueue ");
        p=h->link;
        while(p!=NULL)
                {printf("%d ",p->data);
                p=p->link;}
        printf("\n");}
                        }
void  pop(node *h)
        {int i;
        node *f,*p;
        p=(node*)malloc(sizeof(node));
        f=(node*)malloc(sizeof(node));
        f=h->link;
        if(h->link==NULL)
                printf("queue empty\n");
        else
                {
                p=f->link;
                h->link=p;
                printf("\nDELETED ITEM %d",f->data);
                free(f);
                f=p;
                printf("\nqueue ");


                while(p!=NULL)
                        {printf("%d ",p->data);
                        p=p->link;}
                printf("\n");
                }
        }
void main()
        {
        int data,op;
        char ch='y';
        node *h;
        h=(node*)malloc(sizeof(node));
        h->data=0;
        h->link=NULL;
        do
        {
                printf("MAIN MENU\n1.PUSH\n2.POP\nENTER YOUR OPTION ");
                scanf("%d",&op);
                switch(op)

                        {
                        case 1:printf("ENTER ITEM ");
                        scanf("%d",&data);
                        push(h,data);
                        break;

                        case 2: pop(h);

                        break;


                        default: printf("INVALID OPTION");
                        }
                printf("do you want to continue(y/n)");
                scanf(" %c",&ch);
                }while(ch=='y'||ch=='Y');
}












