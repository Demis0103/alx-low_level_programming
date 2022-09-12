#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  *  * main - print if the number is postive, zero, or negative
 *   *   *   *
 *    *    *    * Description: using the main function
 *     *     * this program prints "programming is postive, zero, or negative"
 *      *      *      * Return: 0
 */
int main(void)
{
	char low;
	for (low = '0'; low <= '9'; low++)
	putchar(low);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
