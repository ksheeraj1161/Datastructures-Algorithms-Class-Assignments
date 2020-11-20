#include<stdio.h>
#define MAX 5
int list[MAX];
int len=0,i,j,k,pos;
int search(int);
void insert(int);
void del(int);
void display();
main(){
int n;
do{
printf("\nEnter your choice: \n1. Insert\n2. Delete\n3. Search\n4. Display\n5. STOP \n");
scanf("%d",&n);
if(n==1){
int e;
printf("Enter element to insert: ");
scanf("%d",&e);
insert(e);
}
else if(n==2){
int e;
printf("Enter element to be deleted: ");
scanf("%d",&e);
del(e);
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
int search(int e){
for(i=0;i<len;i++){
if(list[i]==e)
 {
 printf("\nThe element is present at position: %d \n\n",i+1);
 break;
 }
 }
 if(i==len)
 {
 printf("\nThe search is unsuccessful");
 }
}
void insert(int e){
if(len==MAX)
    printf("LIST FULL!\n");
else{
    int p=len;
    for(i=0;i<len;i++){
    if(list[i]>e){
    p=i;
    break;
}
}
for(i=len-1;i>=p;i--)
   list[i+1]=list[i];
   list[p]=e;
   len++;
   }
}
void del(int e){
for(i=0;i<len;i++){
if (list[i]==e)
pos=i;
}
for(j=pos;j<len;j++)
list[j]=list[j+1];
len--;
}
void display(){
if(len){
for(i=0;i<len;i++){
   printf("%d\t",list[i]);
   }
}
else
   printf("List empty\n");
}
