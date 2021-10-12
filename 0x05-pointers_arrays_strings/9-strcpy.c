#include "main.h"

/**
 * *_strcpy - main function.
 *
 * Description: copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *
 * @src: The source.
 * @dest: The destination.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
