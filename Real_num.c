/*
 * Real_num.c
 *
 *  Created on: 17 Jul 2024
 *      Author: ABHISHEK
 */
#include<stdio.h>
#include<conio.h>
struct realtype
{
	int left;
	int right;
};
struct realtype r,r1;
int real_num_input()
{
	printf("Enter left side of 1st real number");
	scanf("%d",&r.left);
	printf("\nEnter right side of 1st real number");
	scanf("%d",&r.right);
	printf("\nReal number = %d.%d",r.left,r.right);
    printf("\nEnter left side of 2nd real number");
    scanf("%d",&r1.left);
    printf("\nEnter right side of 2nd real number");
    scanf("%d",&r1.right);
    printf("\nReal number = %d.%d",r1.left,r1.right);
    return r.left,r.right,r1.left,r1.right;
}
int add()
{
  int a[10];
  int loop[10];
  a[0]=r.left+r1.left; //for storing left real values
  a[1]=r1.right+r1.right;
  loop[0]=0;
  while(a[1]>=10)
  {
	  a[1]=a[1]-10;
	  loop[0]++;
  }
  a[0]+=loop[0];
  printf("\nAddition of real number = %d.%d",a[0],a[1]);
  return 0;
}
int sub()
{
	int a[10],loop[10];
	if((r.left>=r1.left)&&(r.right>=r1.right)) //left >= right >=
	{
		a[0]=r.left-r1.left;
		a[1]=r.right-r1.right;
		printf("\nSubtraction = %d.%d",a[0],a[1]);
	}
	else if((r.left<r1.left)&&(r.right>=r1.right)) // left < right >=
	{
		//a[0]=r.left+r1.left;  // for if r.left =5 , r1.left = 6 then 5-6 =-1
	//	a[1]=r1.left+a[0] ;   // when r1 is > r then 5-6=-1 stored in a[0],again to subtract which means r1.left +a[0] means 6+(-1)=5
	//	a[2]=a[0]-a[1]; //for subtraction of r.left -r1.left in equa; form means 5-5=0
		a[0]=r.left-r1.left;
		a[1]=r.right-r1.right;
		printf("\nSubtraction = %d.%d",a[0],a[1]);
	}
	else if((r.left<r1.left)&&(r.right<r1.right)) //left < right <
	{
		a[0]=r.left-r1.left; // for 3-5 =-2
		a[1]=r.right-r1.right; // for 4-7=-3;
		a[2]=-a[1];//for -(-3)=3
        printf("\nSubtraction = %d.%d",a[0],a[2]);
	}
	else if((r.left<r1.left)&&(r.right>r1.right))// left < and  right >
	{
		a[0]=r.left-r1.right; //for 2-7=-5;
		while(r.right>r1.right)
		{
			r1.left--;
			r1.right+=10;
		}
		a[1]=r.left-r1.left;
		a[2]=r.right-r1.right;
		printf("Subtraction = %d.%d",a[1],-a[2]);
	}
	return 0;
}
void multiply()
{
	int loop[10],a[10];
	a[0]=r1.right*r.right; //for a12*a2 0.5*0.5
	a[1]=r1.right*r.left;  //for a12*a1 1.0*0.5
	a[1]*=10; //for (1.0*0.5)*10
	//for addition of .50+.25
	a[2]=r1.left*r.right;// for a11*a2
	a[3]=r.left*r1.left;//for a11*a1
	a[2]*=10;
	a[4]=a[0]+a[1]+a[2];//for (a12*a2)+(a12*a1) means 1.5*1.5 for addition of 0.5*0.5+1*0.5=0.75
	loop[0]=0;
	while(a[4]>=100)
	{
		a[4]-=100; //subtracts number if >100
		loop[0]++;// for addition on left side by incrementing
	}
	a[3]+=loop[0];
	//for addition on left side
	printf("\nMultiplication = %d.%d",a[3],a[4]);
}
int main()
{
	real_num_input();
	int a;
	printf("\nEnter \n1 Add \n2 Subtract\n3 Multiply");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		add();
		break;
	case 2:
		sub();
		break;
	case 3:
		multiply();
		break;
	default:
		printf("Wrong choice");
	}
	getch();
	return 0;
}
