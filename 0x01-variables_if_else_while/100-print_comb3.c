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
	int d, e;

	for (d = 0; d <= 9; d++)
{

	for (e = 1; e <= 9; e++);
{
	if (e > d)
{
	putchar(d + '0');
	putchar(e + '0');
	if (d != 8)
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
