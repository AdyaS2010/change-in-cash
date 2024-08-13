#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);

int main(void)
{
    int cents;
    // Prompt the user for change owed (in cents)
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate number of quarters, dimes, nickels, pennies, to give to customer(s)
    // Subtract each from the remaining value, and continue

    int quarters, dimes, nickels, pennies;

    // Initialize coin counts
    quarters = dimes = nickels = pennies = 0;

    // Calculate minimum number of coins
    while (cents >= 25)
    {
        cents -= 25;
        quarters++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        dimes++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        nickels++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        pennies++;
    }

    // Print minimum number of coins
    printf("%d\n", quarters + dimes + nickels + pennies);
}

int calculate_quarters(int cents)
{
    // Calculate #. quarters to be given to customer
    int quarters = 0;
    quarters = cents / quarters;
    int remainder = cents % quarters;
    return quarters;
    return remainder;
}
