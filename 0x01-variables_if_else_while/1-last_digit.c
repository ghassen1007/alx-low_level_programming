#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'get the last digit of a number'
printf the value of n status : greather than  , is zero and is not less then  6
*Return: always 0
*/
int main(void)
{
int n;
int digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n,digit);
}
else if (digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n,digit);
}
else if ( digit < 6 && digit != 0 ) 
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n,digit);
}
return (0);
}