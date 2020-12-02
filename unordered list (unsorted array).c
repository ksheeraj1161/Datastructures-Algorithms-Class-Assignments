#include<stdio.h>
#define MAX 5
int list[MAX];
int len=0,i;
int search(int);
void insert(int,int);
void del(int);
void display();
main(){
int n;
do{
printf("Enter your choice: \n1. Insert\n2. Delete\n3. Search \n4. Display \n5. Stop\n");
scanf("%d",&n);
if(n==1){
int e,p;
printf("Enter element to insert and the position: ");
scanf("%d %d",&e,&p);
insert(e,p-1);
}
else if(n==2){
int e;
printf("Enter position: ");
scanf("%d",&e);
del(e-1);
}
else if(n==3){
int e;
printf("\nEnter the element to be searched: ");
scanf("%d",&e);
search(e);
}
else if(n==4){
display();
}
else if(n==5)
 break;
}while(1);
}
void insert(int e,int p){
if(len==MAX || (p<0||p>len))
printf("LIST FULL! OR Invalid position\n");
else{
for(i=len-1;i>=p;i--)
    list[i+1]=list[i];
    list[p]=e;
    len++;
    }
}
void del(int p){
if((p<0||p>=len) || len==0)
   printf("Invalid position OR list empty\n");
else{
for(i=p+1;i<len;i++)
    list[i-1]=list[i];
    len--;
    }
}
void display(){
if(len){
for(i=0;i<len;i++)
   printf("%d ",list[i]);
   printf("\n");
}
else
  printf("List empty\n");
}
int search(int e){
for(i=0;i<len;i++){
  if(list[i]==e)
  {
   printf("\nThe element is present at position: %d \n",i);
   break;
  }
  }
   if(i==len)
   {
    printf("\nThe search is unsuccessful\n");
   }
}
