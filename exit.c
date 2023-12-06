#include "shell.h"

/**
 * Placeholder Comment
 */
char *custom_strncpy(char *destination, char *source, int num_chars)
{
	int index_dest = 0, index_src = 0;
	char *start = destination;

	while (source[index_src] != '\0' && index_src < num_chars - 1)
	{
		destination[index_dest] = source[index_src];
		index_dest++;
		index_src++;
	}
	if (index_src < num_chars)
	{
		int j = index_src;
		while (j < num_chars)
		{
			destination[j] = '\0';
			j++;
		}
	}
	return (start);
}
