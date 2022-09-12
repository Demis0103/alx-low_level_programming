#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  *  * main - print if the number is postive, zero, or negative
 *   *   *   *
 *    *    *    * Description: using the main function
 *     *  * this program prints "programming is postive, zero, or negative"
 *      *      *      * Return: 0
 *       */
int main(void)
{
int i, j;

	for (i = 0; i < 100; i++)
{
	for (j = 0; j < 100; j++)
{
		
	if (j > i)
{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	if (i != 98)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
