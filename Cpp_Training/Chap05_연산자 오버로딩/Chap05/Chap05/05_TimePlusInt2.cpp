/*
-- 객체와 기본형의 연산
연산자 함수가 받는 피연산자의 타입도 제약이 없다.
*/

#include <iostream>

class Time
{
	friend const Time operator +(int s, const Time &me);
private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		std::cout << hour << " : " << min << " : " << sec << std::endl;
	}
};

const Time operator +(int s, const Time &me) {
	Time t = me;

	t.sec += s;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;
	return t;
}
int main()
{
	Time t1(1, 10, 20);
	t1.OutTime();

	t1 = 100 + t1;
	t1.OutTime();
}

