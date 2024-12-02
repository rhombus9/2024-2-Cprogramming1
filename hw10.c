#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct city
{
	char name[20];
	char country[20];
	char population[20];
} City;

void printCities(City *cities) {
	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %s people\n", 
			i+1, cities[i].name, cities[i].country, cities[i].population);
	}
}

int main(void) {
	
	City cities[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(cities[i].name, sizeof(cities[i].name), stdin);
		cities[i].name[strlen(cities[i].name) - 1] = 0;
		printf("Country> ");
		fgets(cities[i].country, sizeof(cities[i].country), stdin);
		cities[i].country[strlen(cities[i].country) - 1] = 0;
		printf("Population> ");
		fgets(cities[i].population, sizeof(cities[i].population), stdin);
		cities[i].population[strlen(cities[i].population) - 1] = 0;
	}
	printCities(cities);

}