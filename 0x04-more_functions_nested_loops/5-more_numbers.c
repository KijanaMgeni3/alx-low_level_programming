#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 10 times.
 * Returns: Void
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 14; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('i');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
