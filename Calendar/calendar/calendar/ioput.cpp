/* ioput.c */
#include "ioput.h"

//��ȡ�û���������
int input_year(void) 
{
	int year;
	printf("Enter the year:");
	scanf_s("%d",&year);
	return year;
}

//��ȡ�û�������·�
int input_month(void)
{
	int month;
	printf("Enter the month:");
	scanf_s("%d",&month);
	return month;
}

//��ʾ����
void output_days(int year, int month, int week, int is_leap_year)
{
	//�·ݺ����ڵ����Ƽ�ÿ���µ�����
	const char* month_name[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	const char* week_name[7] = { "Su","Mo","Tu","We","Th","Fr","Sa" };
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (is_leap_year)
	{
		days[1] = 29;
	}
		printf("\n");

	//��ʾ�ꡢ�º�����
	printf("     %s %d \n", month_name[month], year);
	for (int i = 0; i < 7; i++)
	{
		printf("%2s ", week_name[i]);
	}
	printf("\n");

	//��ʾÿ��1��ǰ�Ŀհ�
	for (int j = 0; j < week % 7; j++)
	{
		printf("   ");
	}

	//ѭ����ʾ����
	for (int i = 1; i <= days[month]; i++)
	{
		printf("%2d ", i);
		//��ʾ7�����ֺ���
		if ((i + week) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n\n");
}