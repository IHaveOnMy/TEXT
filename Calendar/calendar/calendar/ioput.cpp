/* ioput.c */
#include "ioput.h"

//读取用户输入的年份
int input_year(void) 
{
	int year;
	printf("Enter the year:");
	scanf_s("%d",&year);
	return year;
}

//读取用户输入的月份
int input_month(void)
{
	int month;
	printf("Enter the month:");
	scanf_s("%d",&month);
	return month;
}

//显示日历
void output_days(int year, int month, int week, int is_leap_year)
{
	//月份和星期的名称及每个月的天数
	const char* month_name[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	const char* week_name[7] = { "Su","Mo","Tu","We","Th","Fr","Sa" };
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (is_leap_year)
	{
		days[1] = 29;
	}
		printf("\n");

	//显示年、月和星期
	printf("     %s %d \n", month_name[month], year);
	for (int i = 0; i < 7; i++)
	{
		printf("%2s ", week_name[i]);
	}
	printf("\n");

	//显示每月1号前的空白
	for (int j = 0; j < week % 7; j++)
	{
		printf("   ");
	}

	//循环显示日期
	for (int i = 1; i <= days[month]; i++)
	{
		printf("%2d ", i);
		//显示7个数字后换行
		if ((i + week) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n\n");
}