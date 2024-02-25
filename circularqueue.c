//program for circualr queue
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
struct queue 
{
	char queue[MAXSIZE];
	int front;
	int rear;

};

void createEmptyQueue(struct queue *);
void push 
3~
3~.	0+

(char, struct queue *);
int dequeue(struct queue *);
void display(struct queue *);
int isFull(struct queue *);
int isEmpty(struct queue *);
void main()
{
	struct queue q;
        int n,item;
	createEmptyQueue(&q);
	for(int i=1;i>0;i++)
	{
		printf("press 1 to enqueue,2 to dequeue,3 to display and 4 to exit:");
	       	scanf("%d",&n);
               	switch(n)
	       	{
		    	case 1:
				if(isFull(&q))
				{
         				printf("queue is overflow\n");
				}
 				else
				{
					printf("enter item");
					scanf("%d",&item);
					dequeue(item,&q);
				}
		  		break;
	   	        case 2:
				if(isEmpty(&q))
				{
					printf("queue is empty\n");
				}	
				else
				{	
					printf("your dequeued item is :%d\n",dequeue(&q));
				}
		        	break;
	                case 3:
		   		if(isEmpty(&q))
				   	printf("queue under run \n");
			  	 else
				   	display(&q);
			  	 break;
            		case 4:
		   		exit(1);
            		default;
		  		 printf("you entered invalid number:/n");
	       	}
	}
}

	void createEmptyQueue(struct queue *q)
	{
		q->front=0;
		q->rear=-1;
	void enqueue(char item,struct queue *q)
	{
		q->items[++->rear]=item;
	}
	int dequeue(struct queue *q)
	{
		return q->items[q->front++];
	}
	void display(struct queue *q)
	{
		for(int i=q->front;i<=q->rear;i++)
		{	
			printf("%d\t",q->items[i]);
		}
		printf("\n");
	}
	int isFull(struct queue *q)
	{
		for(q->rear==MAXSIZE-1)
			return 1;
		else
			return 0;
	}
	int isEmpty (struct queue *q)
	{
		if(q->front>q->rear)
			return 1;
		else
			return 0;
	}
