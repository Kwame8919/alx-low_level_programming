#include "main.h"

/**
 * print_numbers - prints  the numbers, from 0 to 9 except 2,4
 * followed by a new line
 */
void print_most_numbers(void){
    for(int i=48;i<=57;i++)
    {
        if(i!=50 && i!=52)
        {
            _putchar(i);
        }
    }
    _putchar('\n')
}
