#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front;
int rear;
void Insert(int q[])
{
	int num;
	if(rear==MAX-1)
	 printf("\n O V E R F L O W");
	else
	{
		printf("\n Enter number : ");
		scanf("%d",&num);
		
		if(rear==-1)
		{
			front=0;
			rear=0;
			q[rear]=num;
		}
		else
		{
			rear=rear+1;
			q[rear]=num;
		}
	}
}
void Delete(int q[])
{
	if(front==-1)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete %d",q[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
	}
}
void display(int q[])
{
	int i;
	if(front==-1)
	 printf("\n Q U E U E   E M P T Y ");
	else
	{
		for(i=front;i<=rear;i++)
		 printf("\n %d",q[i]);
	}
}
void main()
{
	int q[MAX];
	int ch;
	front=-1;
	rear=-1;
	while(1)
	{
		printf("\n\n 1 for Insert ");
		printf("\n 2 for Delete ");
		printf("\n 3 for Display ");
		printf("\n 4 for Exit ");
		printf("\n\n Enter the choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			Insert(q);
			break;
			
			case 2:
			Delete(q);
			break;
			
			case 3:
			display(q);
			break;
			
			case 4:
			exit(1);
			
			default:
			printf("\n Wrong choice ..");
		}
	}
}