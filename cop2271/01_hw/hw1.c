#include <stdio.h>

int main (void) {
	//printf("Welcome to  \"COP 2271 \"\nAssignment 2");
	//printf("\nLet's CODE\\Program!\n");

//printf("Welcome to  \"COP 2271 \"\nAssignment 2\nLet's CODE\\program!\n");

///   int sum = 7 + 3 * 6 / 2 - 5 % 2;
//	printf("%d\n", sum);

	int favNumber = 0;
	int birthYear = 0;
	int product = 0;

printf("Enter your Favorite Number: ");
scanf("%d", &favNumber);
printf("Enter your birth year: ");
scanf("%d", &birthYear);
product = favNumber*birthYear;
printf("Product of the two entered numbers is: %d\n", product);

}


