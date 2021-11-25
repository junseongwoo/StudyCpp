/*
-- 전역 연산자 함수
객체끼리 연산하는 함수는 클래스 안의 멤버로 캡슐화 하는 것이 일반적이지만 
인수만 제대로 전달한다면 클래스 외부의 전역 함수로 작성 가능
*/

#include <iostream>

class Time
{
	friend const Time operator +(const Time &me, const Time &other);

private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		std::cout << hour << " : " << min << " : " << sec << std::endl;
	}
};

const Time operator +(const Time &me, const Time &other) {
	Time t;
	t.sec = me.sec + other.sec;
	t.min = me.min + other.min; 
	t.hour = me.hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;
	return t;
}

int main()
{
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1 + t2;
	t3.OutTime();
}