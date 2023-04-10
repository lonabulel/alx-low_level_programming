#include "main.h"
/**
 * _memcpy - Fills the first n bytes of from mem src to mem dest
 * @dest: string to be replaced
 * @src: string to be copied
 * @n: number of bytes to be copied
 * Return: Pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
