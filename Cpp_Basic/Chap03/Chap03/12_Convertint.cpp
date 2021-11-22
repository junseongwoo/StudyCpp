// 변환 함수
#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	Time(double d) {
		hour = int(d) % 24;
		min = int((d - int(d)) * 100) % 60;
		sec = 0;
	}

	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}

	operator int() {
		return hour * 3600 + min * 60 + sec;
	}
};

void printTime(Time when)
{
	when.OutTime();
}

int main()
{
	Time now(12, 34, 56);
	int i = now;
	printf("i = %d\n", i);

	Time good = 45296;
	good.OutTime();
}