#include <f.h>

int main(void)
{
	do
	{
		double x, res;
		int n;
		printf("1. Task1\r\n");
		printf("2. Task2\r\n");
		printf("3. Task3\r\n");
		printf("4. Task4\r\n");
		printf("5. Task5\r\n");
		printf("6. Exit\r\n");
		int a = _getch();
		switch (a)
		{
		case '1':
			system("cls");
			printf("Task1\n\r");
			x = 5;
			f(&x, &res);
			printf("a=%lf\n", x);
			printf("%f\r\n", res);
			printf("Enter new x:");
			scanf_s("%lf", &x);
			f(&x, &res);
			printf("%f\r\n", res);
			break;
		case'2':
			system("cls");
			printf("Task2\n\r");
			int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			n = sizeof(a) / sizeof(a[0]);
			printf("n=%d\n\r", n);
			writeArray(a, n);
			printf("\n\r");
			break;
		case '3':
			system("cls");
			printf("Task3\n\r");
			int arr[5];
			n = sizeof(arr) / sizeof(int);
			printf("n=%d\n\r", n);
			printf("Input array members\n\r");
			readArray(arr, n);
			printf("Your array\n\r");
			writeArray(arr, n);
			printf("\n\r");
			break;
		case '4':
			system("cls");
			printf("Task3\n\r");
			int array[5];
			n = sizeof(array) / sizeof(int);
			printf("n=%d\n\r", n);
			printf("Input array members\n\r");
			readArray(array, n);
			printf("Sorted array\n\r");
			qs(array, 0, n - 1);
			writeArray(array, n);
			printf("\n\r");
			break;
		case '5':
			system("cls");
			printf("Task5\n\r");
			printf("Input array members\n\r");
			sortStackArray();
			break;
		case '6':
			exit(0);
			break;
		default:
			system("cls");
			printf ("Invalid parameter\n\r");
			break;
		}system("pause");
		system("cls");
	} while (1);
}