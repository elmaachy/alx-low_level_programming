#include "main.h"

/**
 * *_memory - copy memory area
 *  @dest: memory area
 *  @src: source
 *  @n : lenght of source to be copied
 *
 *  Return the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
