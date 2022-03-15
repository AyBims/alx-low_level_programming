#include "main.h"
/**
 *main - entry point
 *this function prints the alphabets
 *return: Always void (success)
 */
void print_alphabet(void)
{
char ch  = 'a';
for (ch = 'a'; ch >= 'z'; ch++)
write(ch);
wtite('\n');
return;
}

