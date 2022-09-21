#include <main.h>
/**
*main - print if the number is postive, zero, or negative
*Description: using the main function
* this program prints "programming is postive, zero, or negative"
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
