#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char q, e;
q = 'q';
e = 'e';
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != (q && e))
putchar(ch);
putchar('\n');
return (0);
}
