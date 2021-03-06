#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: char
 * Return: 1 error 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, m = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
m = m *_atoi(argv[i]);
}
printf("%d\n", m);
return (0);
}
}
/**
 * _atoi - convert a string to an integer
 * @s: int
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *sign);
}
