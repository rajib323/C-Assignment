#include <stdio.h>
#define max 5
int rear,front;

void insert(int q[]){
    if(rear==(max-1)&&front==0||front==(rear+1))
        printf("O V E R F L O W");
    else{
        printf("\n Enter number : ");
        int num;
		scanf("%d",&num);
        if(front==-1&&rear==-1)
            front=0;
        rear=(rear+1)%max;
        q[rear]=num;
        printf("\nInserted");
    }
}

void delete(int q[]){
    if(front==rear)
        printf("U N D E R F L O W");
    else{
        printf("\nDeleted element : %d",q[front]);
        front=(front+1)%max;
        if(front==rear){
            front=-1;
            rear=-1;
        }
    }
}

void display(int q[]){
    if(front==rear)
        printf("Q U E U E   E M P T Y");
    else{
        int i=front;
        while(i!=rear){
            printf("\n %d",q[i]);
            i=(i+1)%max;
        }
        printf("\n %d",q[i]);
    }
}


int main(){
    front=-1;
    rear=-1;

    int q[max];

    int ch;
    while(1)
	{
		printf("\n 1 for Insert ");
		printf("\n 2 for Delete ");
		printf("\n 3 for Display ");
		printf("\n 4 for Exit ");
		printf("\n Enter the choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insert(q);
			break;
			
			case 2:
			delete(q);
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