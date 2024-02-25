#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3
struct stack {
	char items[MAXSIZE];
	int top;
};

void createEmptyStack(struct stack *s)
{
	s->top=-1;
}
int isFull(struct stack *);
int isEmpty(struct stack *);
void push(char item,struct stack *s)
{
    s->items[++s->top]= item;

}

void display(struct stack *s)
{
	for(int i=0;i<=s->top;i++){

	printf("%d\t",s->items[i]);
}
printf("\n");
}
int pop(struct stack *s) 
{

	return s->items[s->top--];
}

int main()
{
	char infix[50];
	int index=0;
	struct stack opstack,poststack;
	createEmptyStack(&opstack);
	createEmptyStack(&poststack);
	printf("converting infix to postfix expression");
        printf("\n enter infix expression");
	gets(infix);
        printf("infix:%s",infix);
	
        while (infix[index]!='\0')
	{
	 if(infix[index]=='(')
			 push ('(',&opstack);
	}
	return 0;
}

	char postfix[20];
	struct stack vstack;
	if (operator)
		operand 2=pop()
		operand 1=pop()
		push (op1 +op2)
	isOperator(char item)
{
	switch(item)
	{
		 case '+':
		 case '-':
	       	 case '*':
		 case '/':
	         case '$':
			return 1;
		        break;
	         default:
			return 0;
	}

	int isFull(struct stack *s)
	{
		if(s->top==MAXSIZE-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int isEmpty(struct stack *s)
{
			if (s->top<0)
			return 1;
	else
			return 0;

	}


