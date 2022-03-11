#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int d = '0';
char ch  = 'a';
for (d = '0'; d <= '9'; d++)
putchar(d);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
