#pragma once
/* calc.h */
#include "ioput.h."
//���չ�ʽ�������ڣ�ֻ�ʺ���1582��10��15��֮�������
int calc_week(int year, int month, int day);
//��������
int calc_leap_year(int year);
//�������ĺ���
void calc_core(void);