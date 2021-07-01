#include "holberton.h"

/**
 * rot13 - encode string
 * @str: input string
 *
 * Description: encodes a string using rot13
 * Return: always (0)
 */

char *rot13(char *str)
{
char *c = str;
int i = 0, j;
char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (; str[i] != '\0'; i++)
{
for (j = 0; j <= 52; j++)
{
if (s[j] == str[i])
{
str[i] = s1[j];
break;
}
}
}
return (c);
}
