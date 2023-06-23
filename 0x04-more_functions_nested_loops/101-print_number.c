#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parametet
 *
 * Return: Always 0
 */
void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
_putchar(45);
i = -1;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar(i % 1 + '0');
}
