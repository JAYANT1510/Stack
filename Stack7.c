/*
 * Stack7.c
 *
 *  Created on: 14 Jul 2024
 *      Author: ABHISHEK
 */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 100
struct stack
{
	int list[size];
	int top;

};
void push(struct stack *sp,int x)
{
	if(sp->top==size)
	{
		printf("\n Stack overflow");
		return;
	}
	sp->list[++sp->top]=x;
	return;
}
int pop(struct stack *sp)
{
	if(sp->top==-1)
	{
		printf("\n Stack is empty i.e underflow");
		return -1;
	}
	return(sp->list[sp->top--]);
}
int peek(struct stack p)
{
	int n;
	if(p.top==-1)
	{
		printf("\nStack is underflow");
		return -1;
	}
	n=p.list[p.top];
	return n;
}
int main()
{
	struct stack s;
	int opt,x,n;
	s.top=-1;
	while(-1)
	{
		printf("\n1 Push 2 pop 3 peek 4 exit\n");
		printf("Enter your choice :");
		scanf("%d",&opt);
		switch(opt)
		{
		 case 1:
			 printf("\nEnter number:");
			 scanf("%d",&x);
			 push(&s,x);
			 break;
		 case 2:
			 n=pop(&s);
			 if(n!=-1)
			 {
				 printf("poped value = %d",n);
			 }
			 break;
		 case 3:
			 n=peek(s);
			 if(n!=-1)
			 {
				 printf("\nTop element :%d",n);
			 }
			 break;
		 case 4:
			 exit(0);

		}
	}
	getch();
	return 0;
}

