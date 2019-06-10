#include <f.h>
void main(void)
{
	static char* s = "asda bepis maymay";
	static char* su = "asda";
	char* str = NULL;
	char* substr = NULL;
	char* cpy = NULL;
	char* cat = NULL;
	char* ins = NULL;
	free(ins);
	free(cat);
	free(cpy);
	free(substr);
	free(str);
	str = strcpy(s);
	substr = strcpy(su);
	do
	{
		printf("1. Delete\n2. Strcpy\n3. Strcat\n4. Insert\n5. Exit\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("Initial str: asda bepis maymay\n\rInitial substr: asda\n\r");
			printf("Selected delete.\nStr after change:\n%s\n", delete(str, substr));
			break;
		case'2':
			system("cls");
			printf("Initial str: asda bepis maymay\n\rInitial substr: asda\n\r");
			cpy = strcpy(str);
			printf("Selected strcpy.\n Str after change:\n%s\n", cpy);
			free(cpy);
			break;
		case'3':
			system("cls");
			printf("Initial str: asda bepis maymay\n\rInitial substr: asda\n\r");
			cat = strcat(str, substr);
			printf("Selected strcat.\n Str after change:\n%s\n", cat);
			free(cat);
			break;
		case'4':
			system("cls");
			printf("Initial str: asda bepis maymay\n\rInitial substr: asda\n\r");
			ins = insert(str, substr, 4);
			printf("Selected insert.\n Str after change:\n%s\n", ins);
			free(ins);
			break;
		case'5':
			free(substr);
			free(str);
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}