#include <f.h>

char *strcpy(const char *src)
{
	int i = 0;
	char *newsrc = (char *)malloc((strlen(src) + 1) * sizeof(char));
	while (*(src + i))
	{
		*(newsrc + i) = *(src + i);
		i++;
	}
	*(newsrc + i) = '\0';
	return newsrc;
}
