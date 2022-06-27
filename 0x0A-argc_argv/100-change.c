#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to return as change
 *
 * @argc: number of arguments passed on the command line
 * @argv: array of command lin arguments
 *
 * Return: 0 if success and 1 if error
 */

int main(int argc, char *argv[])
{
	int cants, remainder, coins;
	int quarters, nickels, dimes, twos, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	remainder = cents % 25;
	dimes = remainder / 10;
	remainder = remainder % 10;
	nickles = remainder / 5;
	remainder = remainder % 5;
	twos = remainder / 2;
	remainder = remainder % 2;
	pennies = remainder / 1;

	coins = quarters + dimes + nickles + twos + pennies;

	printf("%d\n", coins);
	return (0);
}

