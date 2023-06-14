#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 10
int stack[size],top=0,b;
int res;
void push();
void pop();
void display();
int main()
{
	int c;
	printf("\n1.Push\n2.Pop\n3.Display");
	do
	{
		printf("\n\nEnter the Choice::");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("\n\nContents of stack is \t");
				display();
				break;
			default:
				printf("\nInvalid Choice......");
				exit(0);
		}
	}while(c<4);
	return 0;
}
void push()
{
	if(top>=size)
	{
		printf("\nStack Overflow");
		return;
	}
	else
	{
		printf("\nEnter the number to be pushed into the stack::");
		scanf("%d",&b);
		top++;
		stack[top]=b;
		printf("\nNumber pushed is %d",stack[top]);
		return;
	}
}
void pop()
{
	if(top==0)
	{
		printf("\nStack Unerflow");
		return;
	}
	else
	{
		res=stack[top];
		top--;
		printf("\nDeleted elements is %d",res);
		return;
	}
}
void display()
{
	int i;
	if(top==0)
	{
		printf("\nStack Underflow");
		return;
	}
	for(i=top;i>0;i--)
	{
		printf("%d,",stack[i]);
	}
	
}

