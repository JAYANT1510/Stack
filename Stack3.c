/*
 * Stack3.c
 *
 *  Created on: 20 Jul 2024
 *      Author: ABHISHEK
 */
/*
 * The bashemin parking garage contains a single lane that holds up to 10 cars.
 * There is only a single entrance/exit all cars are blocking its path are moved out.
 * the custmer car is driven out,and the othere cars are restored in the same order that they were in
 * originally.wap that process a group of input lines .
 * Each input line contains 'A' for arrival or a 'D' for departure,and a license plate number.
 * cars are assumed to arrive and depart in the order specified by the input.
 * The program should print the message when car arrive or depart .
 * When car arrives ,the message should be specift whether or not there is room for the car in the garage .
 * If thee is no room ,the car leaves without entering the garage.
 * When a car departs ,the message should include the number of times that the car was moved out of the garage to allow others ars to depart.
 */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define no_cars 10
struct stack_cars // cars structure to store 10 cars and there no plates
{
	 int cars;
	 char licens_plate[20];
};
struct stack_cars s[10];
//s[10] varibale to store 10 cars in garage
int a=0,car_num;
void push()
{
	if((s[a].cars)<(no_cars))
	{
	printf("\nEnter car plate no"); // to take car no plate imput
	scanf("%s",&s[a].licens_plate);
	s[a].cars=a;
	printf("\ncars in garage = %d",(s[a].cars+1)); // to store car are present in garage
	a++;
	car_num=a;//varibable to increment structure varibal array no means to increment s.[a] till a>=10
	}
	else if(a>=10)
	{
		printf("\nGarage is full");
	}
}
int pop()
{
	char plate[20];
	printf("Enter car plate no");
	scanf("%s",&plate);
	for(int i=0;i<10;i++)
	{
		int a1=strcmp(plate,s[i].licens_plate);
		if(a1==1)
		{
			char a1;
		//	int car1=i;
			printf("\nFound at car no = %d",s[i].cars+1);
			printf("\nDo you want to depart car");
			scanf("%s",&a1);
			if(a1=='Y'||a1=='y')
			{ // to check if user wants to depart car or not
				printf("\nCar departed at no = %d",s[i].cars+1);
				printf("\nSpace avaliable for cars");
				a--;
				for(int i1=i;i1<10;i1++)
				{
					for(int i2=0;i2<20;i2++)
					{
					  s[i1].licens_plate[i2]=s[i].licens_plate[i2];
					  //to transver all cars one after another at place where car is removed
					}
				}
			}
		}
		else if(i>=10 && plate!=s[i].licens_plate)
		{
			printf("\nCar is not present in garage");
		}
		else if(i<=10 &&s[i].licens_plate==NULL)
		{
			printf("\nSpace left for cars arrival");
		}
	}

}
void implement()
{
	int a=1;
	while(a==1)
	{
		int b;
		printf("\nEnter option\n1 Arrival \n2 Departure\n3 Exit");
		printf("\nEnter option:");
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
}
int main()
{
	implement();
	getch();
	return 0;
}
