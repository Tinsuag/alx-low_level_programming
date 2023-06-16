#include <stdio.h>
/**
* main - Entry point
*
* Description: print alphabet in lowercase then in uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar ('a' + c);
for (c = 0; c < 26; ++c)
putchar ('A' + c);

putchar ('\n');

return (0);
}
