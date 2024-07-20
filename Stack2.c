/*
 * Stack2.c
 *
 *  Created on: 20 Jul 2024
 *      Author: ABHISHEK
 */
//wap in c that a sequence of pop and push operations and an integer representing and an integer representing the size of an array in which a stack is to be implemented ,design an algorithm to determine whether or not overflow occurs.The algorithm should not use a stack .
//
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define stacksize 100
int top=-1;
void push()
{
	top++;
	printf("\nTop =%d",top);
	if(top>=stacksize)
	{
		printf("\nOverflow ");
	}
}
void pop()
{
	top--;
	printf("\nTop = %d",top);
	if(top<=-1)
	{
		printf("\nUndeflow");
	}
}
void s()
{
	int a=-1;
	while(a==-1)
	{
	  int b;
	  printf("\nEnter option \n1 Push\n2 Pop\n3 Exit\n");
	  scanf("%d",&b);
	  switch(b)
	  {
	  case 1:
		  push();
		  break;
	  case 2:
		  pop();
		  break;
	  case 3:
		  exit(0);
		  break;
	  }
	}
    getch();
}
int main()
{
	s();
	return 0;
}
