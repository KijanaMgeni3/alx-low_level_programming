#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *positive_or_negtive - generates random numbers,delcares + OR -
 *@i:integer
 * Return: 1, if succesful
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
}
