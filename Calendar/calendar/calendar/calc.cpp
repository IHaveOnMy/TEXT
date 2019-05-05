/* calc.c */
#include "calc.h"
//���չ�ʽ�������ڣ�ֻ�ʺ���1582��10��15��֮�������
//���� = �� + [�� / 4] + [���� / 4] - 2 �� ���� + [26 �� (�� + 1) / 10] + �� - 1
int calc_week(int year, int month, int day)
{
	if (month <= 2)
	{
		month += 12;
		year--;
	}
	int century = year / 100;
	year %= 100;
	int days = (year + year / 4 + century / 4 - 2 * century + 26 * (month + 1) / 10 + day - 1) % 7;
	while (days < 0)
	{
		days += 7;
	}
	return days;
}
	//��������
	int calc_leap_year(int year)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
		{
			return 1;
		}
		return 0;
	}

	//�������ĺ���
	void calc_core(void)
	{
		do
		{
			int year = input_year();
			if (year <= 1582) 
			{
				break;
			}
			int month = input_month();
			if (month <= 0 || month >= 13)
			{
				break;
			}
			int is_leap_year = calc_leap_year(year);
			int week = calc_week(year,month,1);
			month--;
			output_days(year, month, week, is_leap_year);
		} while (1);
}