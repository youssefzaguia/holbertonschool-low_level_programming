#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-prints the alphabet in lowercase except q and e
 * Return: Always (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}
