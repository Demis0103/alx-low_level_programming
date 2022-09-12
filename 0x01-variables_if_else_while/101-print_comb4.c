nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  *  * main - print if the number is postive, zero, or negative
 *   *   *   *
 *    *    *    * Description: using the main function
 *     *     *     * this program prints "programming is postive, zero, or negative"
 *      *      *      * Return: 0
 */
int main(void)
{
int i, j, k;

	for (i = 0; i <= 9; i++)
{
	for (j = 1; j <= 9; j++)
{
	for (k = 2; k <= 9; k++)
{
	if (j > i)
	if (k > j)
{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
	if (i != 8)
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
	putchar('\n');
	return (0);
}
