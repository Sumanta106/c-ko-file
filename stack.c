#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
struct stack 
{
	char items[MAXSIZE];
	int top;
};

void createEmptyStack(struct stack *);
void push (char, struct stack *);
void display(struct stack *);
int isFull(struct stack *);
int isEmpty(struct stack *);
void main()
{
	char infix[50];
	int index=0;
	struct stack opstack,poststack;


	//creating empty stack
	createEmptyStack(&opstack);
	createEmptyStack(&poststack);

	printf("converting infix to postfix expression");

	//taking infix expression as input
        printf("\n enter infix expression");
	gets(infix);
        printf("infix:%s\n",infix);
        while (infix[index]!='\0')
	{
	        if(infix[index]=='(')
			 push ('(',&opstack);
                else if(isOperand(infix[index]));
		         push(infix[index],&poststack);
                else if (isOperator(infix[index]));
	                 {	 
				 if(opstack.top !=-1)
				 {
					 while(precedence(opstack)
							 }
