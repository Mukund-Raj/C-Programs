#include<stdio.h>


//initially top is -1 means stack is empty if there is element
//then top will be 0 or 1 or 2 or any integer
int top=-1;
//maxsize the stack can hold
int maxsize=100;
//array stack for stroing the element 
int stack[100];

//for pushing the element
void push()
{
	int ele;
	printf("\nenter an element");
	scanf("%d",&ele);
	//checking the overflow conition or whether the stack is full or not
	//if full we don't insert any element
	if(top==maxsize-1)
	printf("overflow");
	else
	stack[++top]=ele;//otherwise we insert element ++top meanstop=top+1
}

void pop()
{
	//checking if stack is empty or not
	if(top==-1)
	printf("Underflow!!!");
	else
	printf("%d is deleted",stack[top--]);//otherwise we delete the element by decrement the top
}

void display()
{
	printf("\n");
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
int main()
{
	printf("\tStack\n");
	
	int choice;
	char ch;

	do
	{
		printf("\t1-Push\n");
		printf("\t2-Pop\n");
		printf("\t3-Display\n");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nenter something\n");
		}
			printf("do you want to continue");
			fflush(stdin);
			ch=getchar();
			
		
	}while(ch=='y'||ch=='Y');
	
	return 0;
}


