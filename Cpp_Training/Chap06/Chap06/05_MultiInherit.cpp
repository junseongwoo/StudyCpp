#include <stdio.h>
#include <conio.h>

class Date
{
protected:
	int year, month, day;

public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}

	void OutDate()
	{
		printf("%d / %d / %d", year, month, day);
	}
};

class Time
{
protected :
	int hour, min, sec;

public:
	Time(int h, int m, int s)
	{

	}
};


		