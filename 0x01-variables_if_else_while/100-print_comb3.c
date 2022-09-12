#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  *  * main - print if the number is postive, zero, or negative
 *   *   *   *
 *    *    *    * Description: using the main function
 *     * this program prints "programming is postive, zero, or negative"
 *      *      *      * Return: 0
 */
int main(void)
{
	int d;
	
	for (d = 0; d < 100; d++)
{
	putchar((d/10) + '0');
	if (d != 99)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
