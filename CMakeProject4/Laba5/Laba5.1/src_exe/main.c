#include <stdio.h>
#include <func.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "Rus");
	const char str[20];
	const char substr[20];
	char dest[] = "";
	int len;
	int lendest;
	int index;
	do
	{
	printf("1. StringLength\n\r");
	printf("2. FindSubstring\n\r");
	printf("3. DeleteSubstrFromStr\n\r");
	printf("4. CopyString\n\r");
	printf("5. MergeStrings\n\r");
	printf("6. IncludeSubstring\n\r");
	printf("7. Exit\n\r");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("������� ���� ������:\n\r");
			gets(str);
			printf("����� ������ �����: %d\n\r", strlen(str));
			break;
		case '2':
			system("cls");
			printf("������� ���� ������:\n\r");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			char* p = find(str, substr);
			if (p == 0) {
				printf("0\n");
			}
			else {
				printf("1, ����� ��������� %p\n", p);
			}
			break;
		case'3':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			delete(str, substr);
			printf("����� ������: %s\n", str);
			break;
		case'4':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������� ��������: \n");
			scanf_s("%d", &len);
			strcpy(dest, len, str);
			printf("��������� = %s\n", dest);
			break;
		case'5':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			printf("������� ������ ������: \n");
			scanf_s("%d", &lendest);
			strcat(dest, lendest, str, substr);
			printf("��������� ������������ = %s\n", dest);
			break;
		case '6':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			printf("������� ������ ������: \n");
			scanf_s("%d", &lendest);
			printf("������� ������: \n");
			scanf_s("%d", &index);
			if (insert(str, substr, index, dest, lendest))
			{
				printf("dest = %s\n", dest);
			}
			else
			{
				printf("ERROR: C���� ���� �������� ������ � ������ ��� ������� ������ ������� ������ ��� ������ ��������� �� ��������� ������\n");
			}
			break;
		case '7':
			exit(0);
			break;
		default:
			printf("�������� �������� �����\n\r");
			break;
		}
		system("pause");
		system("cls");
	} while (1);
}