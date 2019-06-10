#include <func.h>

void main(void)
{
	do
	{
		printf("1. Task2\n2. exit\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			sortHeapArray();
			break;
		case'2':
			exit(0);
		default:
			printf("Invalid parameter\n\r");
			break;
		}
		system("pause");
		system("cls");
	} while (1);
}
