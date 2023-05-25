// To count vowels in a string by using pointers.

#include <stdio.h>

int main() 
{
char str[100];
int vowels = 0;
char *ptr = str;
printf("Enter a string: ");
fgets(str, 100, stdin);

while (*ptr != '\0') 
{
    if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') 
        {
            vowels++;
        }
    ptr++;
}
printf("The number of vowels in the string is: %d\n", vowels);

return 0;
}
