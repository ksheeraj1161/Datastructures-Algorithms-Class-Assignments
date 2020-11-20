#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node* left;
 struct node* right;
};
void inorder(struct node* root){
 if(root == NULL) return;
 inorder(root->left);
 printf("%d ->", root->data);
 inorder(root->right);
}
void preorder(struct node* root){
 if(root == NULL) return;
 printf("%d ->", root->data);
 preorder(root->left);
 preorder(root->right);
}
void postorder(struct node* root) {
 if(root == NULL) return;
 postorder(root->left);
 postorder(root->right);
 printf("%d ->", root->data);
}
struct node* createNode(value){
 struct node* newNode = malloc(sizeof(struct node));
 newNode->data = value;
 newNode->left = NULL;
 newNode->right = NULL;
 return newNode;
}
struct node* insertLeft(struct node *root, int value) {
 root->left = createNode(value);
 return root->left;
}
struct node* insertRight(struct node *root, int value){
 root->right = createNode(value);
 return root->right;
}
int main(){
	 printf("\nProgram to create Binary Tree and to perform preorder inorder and postorder traversal \n");
     printf("\n------------------------------------------\n");
	int n[10],i,j,choice;
	while (1)
	{
	printf("\n\n1.Create\n");
  	printf("2.Inorder Traversal\n");
  	printf("3.Preorder Traversal\n");
    printf("4.Postorder Traversal\n");
  	printf("5.Exit\n");
  	printf("Enter choice : ");
  	scanf("%d", &choice);
	switch(choice)
   {
             case 1:
             printf("Enter The Number of Nodes In The Tree: ");
             scanf("%d", &i);
	for( j = 1; j <=i ; j++) 
	{
	printf("Enter The Node values: ");
     scanf("%d", &n[j]);
    }
 	struct node* root = createNode(n[1]);
 	insertLeft(root, n[2]);
 	insertRight(root, n[3]);
 	insertLeft(root->left, n[4]);
 	insertRight(root->left, n[5]);
 	break;
 	case 2:
 	printf("Inorder traversal \n");
 	inorder(root);
 	break;
 	case 3:
 	printf("\nPreorder traversal \n");
 	preorder(root);
 	break;
 	case 4:
 	printf("\nPostorder traversal \n");
 	postorder(root);
 	break;
 	case 5:
    exit(0);
    break;
	default:
 	printf("Wrong choice, Please enter correct choice ");
 	break;
 }
}
}
