#ifndef Date_H
#define Date_H

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;

	bool isLeapYear(int year)
	{
		return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
	}

	int getNumberOfDaysInMonth(int year, int month)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 ||
			month == 8 || month == 10 || month == 12)
			return 31;

		if (month == 4 || month == 6 || month == 9 || month == 11)
			return 30;

		if (month == 2) return isLeapYear(year) ? 29 : 28;
	}

public:
	Date()
	{
		setDate(time(0));
	}

	Date(int elapseTime)
	{
		setDate(elapseTime);
	}

	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}

	void setDate(int elapseTime)
	{
		long seconds = elapseTime;
		long minutes = seconds / 60;
		long hours = minutes / 60;
		day = hours / 24;

		year = 1970;
		while (day >= (isLeapYear(year) ? 366 : 365))
		{
			day = day - (isLeapYear(year) ? 366 : 365);
			year++;
		}

		month = 1;
		while (day >= getNumberOfDaysInMonth(year, month))
		{
			day = day - getNumberOfDaysInMonth(year, month);
			month++;
		}
	}

	int getYear()
	{
		return year;
	}

	int getMonth()
	{
		return month;
	}

	int getDay()
	{
		return day;
	}
};
#endif