#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void push(int);
int pop();
int vstack[100];
int tos=-1;
int main()
{
	int i,res,len,op1,op2,value[100];
	char prefix[100],ch;
	printf("Enter a valid prefix\n");
	gets(prefix);
	len = strlen(prefix);
	for(i = len-1;i>=0;i--)
	{
		if(isalpha(prefix[i]))
		{
			printf("Enter value of %c:",prefix[i]);
			scanf("%d",&value[i]);
			push(value[i]);
		}
		else
		{
			ch=prefix[i];
			op1=pop();
			op2=pop();
			switch(ch)
			{
				case'+':
					push(op1+op2);
					break;
				case'-':
					push(op1-op2);
					break;
				case'*':
					push(op1*op2);
					break;
				case'/':
					push(op1/op2);
					break;
				case'$':
					push(pow(op1,op2));
					break;
				case'%':
					push(op1%op2);
					break;
			}
		}
	}
	printf("The result is : ");
	res = pop();
	printf("%d",res);
	
}
void push(int val)
{
	vstack[++tos]=val;
	
}
int pop()
{
	int n;
	n=vstack[tos--];
	return(n);
}
