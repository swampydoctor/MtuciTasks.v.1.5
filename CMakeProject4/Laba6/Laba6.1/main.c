#include <locale.h>
#include <string.h>
#include <stdio.h>

#define TERMS_SIZE 12

#define SUBJECTS_SIZE 10


struct Date {
	int year;
	int month;
	int day;
};

enum examResult {
	TWO = 2, THREE, FOUR, FIVE
};

enum CreditResult {
	TRUE, FALSE
};

enum GradeType {
	EXAM, CREDIT
};

struct Grade {
	_Bool creditResult;
	enum ExamResult examResult;
	enum GradeType gradeType;
};

struct Subject {
	int init;
	char name[20];
	struct Grade grade;
	char teacherLastName[20];
	struct Date date;
};

struct Term
{
	int init;
	int number;
	int year;
	struct Subject subjects[SUBJECTS_SIZE];
};

struct GradeBook
{
	const char firstName[20];
	char lastName[20];
	char middleName[20];
	char number[10];
	struct Term terms[12];
};


void initSubject(struct Subject *p_subject, const char * subjectName, const char * teacherLastName,
	enum GradeType gradeType, _Bool creditResult, enum ExamResult examResult, int day, int month, int year) {
	p_subject->init = 1;
	strcpy(p_subject->name, subjectName);
	strcpy(p_subject->teacherLastName, teacherLastName);

	p_subject->grade.gradeType = gradeType;
	if (examResult != NULL) {
		p_subject->grade.examResult = examResult;
	}
	else {
		p_subject->grade.creditResult = creditResult;
	}

	struct Date date;
	date.day = day;
	date.month = month;
	date.year = year;
	p_subject->date = date;
}

void initCreditSubject(struct Subject* p_subject, const char* subjectName, const char* teacherLastName,
	_Bool creditResult, int day, int month, int year) {
	initSubject(p_subject, subjectName, teacherLastName, CREDIT, creditResult, FIVE, day, month, year);
}

void initExamSubject(struct Subject* p_subject, const char* subjectName, const char* teacherLastName,
	enum ExamResult examResult, int day, int month, int year) {
	initSubject(p_subject, subjectName, teacherLastName, EXAM, 0, examResult, day, month, year);
}

int main()
{
	setlocale(LC_ALL, "Rus");

	struct GradeBook gradeBook;

	const char firstName[] = "������";
	const char lastName[] = "���������";
	const char middleName[] = "���������";
	const char number[] = "1���76069";


	strcpy(gradeBook.firstName, firstName);
	strcpy(gradeBook.lastName, lastName);
	strcpy(gradeBook.middleName, middleName);
	strcpy(gradeBook.number, number);

	// ------------------ Creating terms -------------------------

	struct Term terms[12];
	terms[0].init = 1;
	terms[0].number = 1;
	terms[0].year = 2017;

	struct Subject subjects[5];

	initCreditSubject(&subjects[0], "���������� ����", "�������", 1, 5, 02, 2018);
	initCreditSubject(&subjects[1], "��", "������", 1, 14, 01, 2018);
	initExamSubject(&subjects[2], "�����", "��������", FOUR, 22, 01, 2018);
	initExamSubject(&subjects[3], "���", "������", FIVE, 29, 01, 2018);
	initExamSubject(&subjects[4], "�����������", "������", TWO, 5, 02, 2018);

	memcpy(&terms[0].subjects, &subjects, sizeof(subjects));

	memcpy(&gradeBook.terms, &terms, sizeof(terms));

	printf("������� ����� ��������:\n");
	int n;
	scanf_s("%d", &n);

	printInfoByTermNumber(gradeBook, n);

}

int printInfoByTermNumber(struct GradeBook gradeBook, int number) {

	printf("���: %s\n", gradeBook.firstName);
	printf("�������: %s\n", gradeBook.lastName);
	printf("��������: %s\n", gradeBook.middleName);
	printf("����� �������� �����: %s\n", gradeBook.number);

	if (number < 1 || number > 12) {
		printf("������ ������� �����������!\n");
		system("pause");
		return;
	}


	int shiftedNumber = number - 1;

	if (gradeBook.terms[shiftedNumber].init != 1) {
		printf("���������� � �������� �� ���������!\n");
		system("pause");
		return;
	}

	printf("���: %d\n", gradeBook.terms[shiftedNumber].year);
	printf("����� ��������: %d\n", gradeBook.terms[shiftedNumber].number);

	// ������� �������� ��������			
	printf("************************************\n");
	for (int j = 0; j < SUBJECTS_SIZE && gradeBook.terms[shiftedNumber].subjects[j].init == 1; j++) {

		printf("�������� ��������: %s\n", gradeBook.terms[shiftedNumber].subjects[j].name);


		if (gradeBook.terms[shiftedNumber].subjects[j].grade.gradeType == EXAM) {
			printf("������: %d\n", gradeBook.terms[shiftedNumber].subjects[j].grade.examResult);
		}
		else {
			if (gradeBook.terms[shiftedNumber].subjects[j].grade.creditResult) {
				printf("�����\n");
			}
			else {
				printf("�������\n");
			}
		}

		int day = gradeBook.terms[shiftedNumber].subjects[j].date.day;
		int month = gradeBook.terms[shiftedNumber].subjects[j].date.month;
		int year = gradeBook.terms[shiftedNumber].subjects[j].date.year;
		printf("����: %d.%d.%d\n", day, month, year);

		printf("������� �������������: %s\n", gradeBook.terms[shiftedNumber].subjects[j].teacherLastName);
		printf("------------------------------------\n");
	}

	system("pause");

}