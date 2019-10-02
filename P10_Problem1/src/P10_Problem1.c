/*
 ============================================================================
 Name        : P10_Problem1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int n_cars;

typedef struct
{
	char maker[MAX];
	char model[MAX];
} auto_t;

typedef struct
{
	int odometer;
	int m_day;
	int m_month;
	int m_year;
	int p_day;
	int p_month;
	int p_year;

} date_t;

typedef struct
{
	float capacity;
	float c_fuel;
} tank_t;

auto_t car[20];
date_t date[20];
tank_t tank[20];

void scan_date();
void scan_tank();
void scan_auto();
void auto_filler();

int main(void) {

	n_cars = 0;

	int number;

	int i;

	printf("Enter how many cars: ");
	fflush(stdout);
	scanf("%d",&number);

	for (i=0; i<number; i++)
	{
		scan_auto();
		scan_date();
		scan_tank();
		auto_filler();

		n_cars++;
	}


	return EXIT_SUCCESS;
}
void scan_date()
{
	printf("Enter the odometer reading: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].odometer);
	printf("Enter the manufacture day: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].m_day);
	printf("Enter the manufacture month: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].m_month);
	printf("Enter the manufacture year: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].m_year);
	printf("Enter the purchase day: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].p_day);
	printf("Enter the purchase month: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].p_month);
	printf("Enter the purchase year: ");
	fflush(stdout);
	scanf("%d",&date[n_cars].p_year);

}
void scan_tank()
{
	printf("Enter the capacity: ");
	fflush(stdout);
	scanf("%f",&tank[n_cars].capacity);
	printf("Enter the current fuel: ");
	fflush(stdout);
	scanf("%f",&tank[n_cars].c_fuel);
}
void scan_auto()
{
	printf("Enter the maker: ");
	fflush(stdout);
	scanf("%s",car[n_cars].maker);
	printf("Enter the model: ");
	fflush(stdout);
	scanf("%s",car[n_cars].model);
}

void auto_filler()
{
	printf("%s %s %d %d %d %d %d %d %d %.2f %.2f\n",car[n_cars].maker, car[n_cars].model, date[n_cars].odometer, date[n_cars].m_day, date[n_cars].m_month, date[n_cars].m_year, date[n_cars].p_day, date[n_cars].p_month, date[n_cars].p_year, tank[n_cars].capacity, tank[n_cars].c_fuel);
}
