#include<unistd.h>

/**
 * main - Prints a text
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2,"and that piece pf art is useful\"-Dora Kopar,2015-10-19\n",59);
	return(1);
}
