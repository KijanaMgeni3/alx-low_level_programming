#include <stdio.h>

/**
* main - causes an infinite loop comments leads to Infinite loop avoided
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/**
*while (i < 10)
*{
*putchar(i);
*}
*/
printf("Infinite loop avoided!");

return (0);
}
