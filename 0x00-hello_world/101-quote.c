#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
int main(void)
{
               char destination[] =  "and that piece of art is ";
	       char source[] =  "useful\" - Dora Korpar, 2015-10-19\n";

	        write(2,strcat(destination,source) , 59);
		return (1);
}
