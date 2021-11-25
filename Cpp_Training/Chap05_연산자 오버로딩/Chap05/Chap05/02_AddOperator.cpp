/*
-- 연산자 기호로 함수 호출
*/

#include <iostream>

class Time
{
private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }

	void OutTime() {
		std::cout << hour << " : " << min << " : " << sec << std::endl;
	}

	// 앞의 AddTime 함수를 operator + 로 바꾸었다.
	const Time operator +(const Time &other) const {
		Time t;
		t.sec = sec + other.sec;
		t.min = min + other.min;
		t.hour = hour + other.hour;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}
};

int main()
{
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1 + t2;
	t3.OutTime();
}