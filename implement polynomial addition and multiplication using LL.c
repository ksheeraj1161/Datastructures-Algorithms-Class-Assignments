#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 17
typedef struct node
 {
int coeff;
struct node *next;
 }node;
node * init();
void read(node *h1);
void print(node *h1);
node * add(node *h1,node *h2);
node * multiply(node *h1,node *h2);
void main()
{
node *h1=NULL,*h2=NULL,*h3=NULL;
int option;
 printf("\n Program to implement polynomial addition and multiplication using LL \n");
 printf("\n----------------------------------------------------------------------\n");
do
{
printf("\n 1.create 1st polynomial");
printf("\n 2.create 2nd polynomial");
printf("\n 3.Add polynomials");
printf("\n 4.Multiply polynomials");
printf("\n 5.Quit");
printf("\n Enter your choice :");
scanf("%d",&option);
switch(option)
{
	case 1:
	h1=init();
	read(h1);
	break;
	case 2:
	h2=init();
	read(h2);
	break;
	case 3:
	h3=add(h1,h2);
 	printf("\n 1st polynomial -> ");
 	print(h1);
 	printf("\n 2nd polynomial -> ");
 	print(h2);
 	printf("\n Sum = ");
 	print(h3);
 	break;
	case 4:
	h3=multiply(h1,h2);
	printf("\n 1st polynomial -> ");
 	print(h1);
 	printf("\n 2nd polynomial -> ");
 	print(h2);
 	printf("\n Product = ");
 	print(h3);
 	break;
	}
}while(option!=5);
}
void read(node *h)
{
int n,i,j,power,coeff;
node *p;
p=init();
printf("\nEnter number of terms :");
scanf("%d",&n);
for (i=0;i<n;i++)
{ printf("Enter a term(power & coeff)");
scanf("%d%d",&power,&coeff);
for(p=h,j=0;j<power;j++)
 p=p->next;
p->coeff=coeff;
}
}
void print(node *p)
{
 int i;
for(i=0;p!=NULL;i++,p=p->next)
if(p->coeff!=0)
printf("%dX^%d ",p->coeff,i);
}
node * add(node *h1, node *h2)
{
 node *h3,*p;
 h3=init();
 p=h3;
 while(h1!=NULL)
 {
h3->coeff=h1->coeff+h2->coeff;
h1=h1->next;
h2=h2->next;
h3=h3->next;
 }
return(p);
}
node * multiply(node *h1, node *h2)
{
node *h3,*p,*q,*r;
int i,j,k,coeff,power;
h3=init();
for(p=h1,i=0;p!=NULL;p=p->next,i++)
for(q=h2,j=0;q!=NULL;q=q->next,j++)
 {
coeff=p->coeff * q->coeff;
power=i+j;
for(r=h3,k=0;k<power;k++)
r=r->next;
r->coeff=r->coeff+coeff;
 }
 return(h3);
}
node * init()
{
 int i;
 node *h=NULL,*p;
 for(i=0;i<MAX;i++)
{
p=(node*)malloc(sizeof(node));
p->next=h;
p->coeff=0;
h=p;
}}
