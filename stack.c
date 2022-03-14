#include<stdio.h>
#define s 5  //size declaration
int stack[s];//declaration of stack with size
int top=-1;//top of stack
void push(int ele)
{                     top=s-1(3)
	if(top==s-1)//4(stack is full)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
	top++;      
	stack[top]=ele;
	}
}
void pop()
{
	if(top==-1)
	{	
		printf("stack is empty\n");
		return;
	}
	else
	{
	printf("poped elements are: %d\n",stack[top]);//3  stack[2] stack[1]=2
	top--;
	}
}
void display()
{
	if(top== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)
	printf("%d\n",stack[i]);
}
int main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();
}
