#include<stdio.h>
#include<stdlib.h>
#define MAX 10 
int top; // global variable

void push(int stk[])
{
	int num;
	if(top==MAX-1)	
	 printf("\n O V E R F L O W\n");
	else
	{
		printf("\n Enter the data : ");
		scanf("%d",&num);
		top++;
		stk[top]=num; //place the number at stack top
		printf("\n Number Inserted..\n");
	}
	
}
void pop(int stk[])
{
	if(top==-1)
	 printf("\n U N D E R F L O W\n");
	else
	{
		printf("\n Delete element : %d",stk[top]);
		top=top-1;
	}
}
void display(int stk[])
{
	int i;
	if(top==-1)
	 printf("\n STACK IS EMPTY\n");
	else
	{
		printf("\n Stack elements :");
		for(i=top;i>=0;i=i-1)
		{
			printf("\n %d",stk[i]);
		}
	}
}
void main()
{
	int stk[MAX];
	int ch;
	top=-1;// initialize
	while(1)
	{
		printf("\n\n 1 for PUSH ");
		printf("\n 2 for POP");
		printf("\n 3 for DISPLAY ");
		printf("\n 4 for EXIT ");
		printf("\n Enter the choice : ");
		scanf("%d",&ch); // accept choice from user
		
		switch(ch)
		{
			case 1:
			push(stk);
			display(stk);
			break;
			
			case 2:
			pop(stk);
			display(stk);
			break;
			
			case 3:
			display(stk);
			break;
			
			case 4:
			exit(1);// defined used stdlib.h ( exit from program)
			
			default:
			printf("\n Wrong choice\n");
			
		}// end of switch
	} // end of while loop
}// end of method