#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int n;
int count;


count = 0;
while (count < 10)
{
for (n = 'a' ; n <= 'z'; n++)
{
_putchar(n);
}

count++;
_putchar('\n');
}


}
