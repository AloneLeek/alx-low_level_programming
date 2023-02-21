#include "main.h"
/**
 * _isalpha - checker for alphabetic character
 * @c: char to be checked
 * Return: 1 if c is lowercase or uppercase letter, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'));
}
