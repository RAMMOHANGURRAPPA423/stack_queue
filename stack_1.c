@@ -0,0 +1,62 @@
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top;
int s[SIZE];
void push(int item)
{
	if(top==SIZE-1)
	{
		printf("Stack is full\n");
		return;
	}
	top++;
	s[top]=item;
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	item=s[top];
	printf("The deleted item = %d\n",item);
	top--;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	printf("The contents of stack are:\n");
	for(i=top;i>=0;i--)
	printf("%d\n",s[i]);
}
void main()
{
	int item,choice;
	top=-1;
	for(;;)
	{
		printf("1.Push\t2.Pop\t3.Display\t4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the item to insert: ");
			       scanf("%d",&item);
			       push(item);
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			default:exit(0);	   	          
		}
	}
}
