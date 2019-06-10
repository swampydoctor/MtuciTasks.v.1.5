#include <func.h>

void strcpy(char* dest, int len, const char* src)
{
	int i = 0;
	while (i < len && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = '\0';
}