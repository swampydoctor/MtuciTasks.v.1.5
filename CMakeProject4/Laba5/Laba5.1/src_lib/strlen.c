#include <stdio.h>
#include <func.h>

int strlen(const char *str)
{
	int count = 0;
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}
	return count;
}