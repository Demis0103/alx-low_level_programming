#include "main.h"
/**
* _isalpha - checks for alphabetical letters
* @c: a charact to be cheched on
* Return: returnes 0 and 1 depening on condition
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
