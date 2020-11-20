#define SIZE 50
#include <ctype.h>
#include <stdio.h>
char s[SIZE];
int top=-1;
void RemoveSpaces(char* source) {
char* i = source;
char* j = source;
	while(*j != 0) {
		*i = *j++;
		if(*i != ' ')
		i++;}
		*i = 0;}
void push(char elem) {
s[++top] = elem;
}
char pop() {
return (s[top--]);
}
int pr(char elem) {
	switch (elem) {
	case '#':
	return 0;
	case '(':
	return 1;
	case '+':
	case '-':
	return 2;
	case '*':
	case '/':
	return 3;
}
}void infix_to_postfix(char *infix, char *postfix) {
char ch, elem;
int i = 0, k = 0;
RemoveSpaces(infix);
push('#');
while ((ch = infix[i++]) != '\n') {
if (ch == '(')
push(ch);
else if (isalnum(ch))
postfix[k++] = ch;
else if (ch == ')') {
while (s[top] != '(')
postfix[k++] = pop();
elem = pop();
} else {
while (pr(s[top]) >= pr(ch))
postfix[k++] = pop();
push(ch);
}
}
while (s[top] != '#')
postfix[k++] = pop();
postfix[k] = 0;
}
int eval_postfix(char *postfix) {
char ch;
int i = 0, op1, op2;
while((ch = postfix[i++]) != 0) {
if(isdigit(ch))
push(ch-'0');
else {
op2 = pop();
op1 = pop();
	switch(ch) {
	case '+' : push(op1+op2);
	break;
	case '-' : push(op1-op2);
	break;
	case '*' : push(op1*op2);
	break;
	case '/' : push(op1/op2);
	break;
} } }
return s[top];
}
int main() {
char infx[50], pofx[50];
printf("\nInput the infix expression: ");
fgets(infx, 50, stdin);
infix_to_postfix(infx, pofx);
printf("\nGiven Infix Expression: %sPostfix Expression: %s", infx, pofx);
top = -1;
printf("\nResult of evaluation of postfix expression: %d", eval_postfix(pofx));
}
