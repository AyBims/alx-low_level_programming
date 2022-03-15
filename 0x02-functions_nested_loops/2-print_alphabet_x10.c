#include "main.h"
/**
 *print_alphabet_x10 - this function prints the alphabets
 *return: Always void (success)
 */
void print_alphabet_x10(void)
{
char ch = 'a'
int n = 0;
while (n > 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
n++
_putchar('\n');
}
}
