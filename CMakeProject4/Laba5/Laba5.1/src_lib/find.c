#include <func.h>


_Bool check(const char *str, const char *substr)
{
	int i = 0;
	while (*(str + i) == *(substr + i) && *(str + i) != '\0')
	{
		i++;
	}
	return (strlen(substr) == i) ? 1 : 0;
}

char *find(const char* str, const char* substr)
{
	while (*str)
	{
		if (check(str, substr))
		{
			return str;
		}
		*str++;
	}
	return 0;
}