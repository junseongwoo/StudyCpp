/*
-- 관계 연산자
관계 연산자는 객체끼리 비교
두 개의 객체가 같은지,
혹은 대소 결과를 리턴하여 객체 비교식을 조건문이나 반복문에 바로 사용 가능
통상 같은 타입의 객체끼리 비교하므로 멤버 연산자 함수로 정의하는 것이 간편
*/

#include <iostream>

class Time
{
	friend const Time operator +(int s, const Time& me);
private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		std::cout << hour << " : " << min << " : " << sec << std::endl;
	}
	bool operator ==(const Time& other) const {
		return (hour == other.hour && min == other.min && sec == other.sec);
	}

	bool operator != (const Time& other) const {
		return !(*this == other);
	}

	bool operator >(const Time& other) const {
		if (hour > other.hour) return true;
		if (hour < other.hour) return false;
		if (min > other.hour) return true;
		if (min < other.hour) return false;
		if (sec > other.hour) return true;
		return false;
	}

	bool operator >= (const Time& other) const {
		return (*this == other || *this > other);
	}

	bool operator <(const Time& other) const {
		return !(*this >= other);
	}

	bool operator <=(const Time& other) const {
		return !(*this >= other);
	}

};

int main()
{
	Time t1(12, 34, 56);
	Time t2(12, 34, 21);

	if (t1 == t2) {
		std::cout << "두 시간은 같다!" << std::endl;
	}
	else
	{
		std::cout << "두 시간은 다르다!" << std::endl;
	}

	if (t1 > t2) {
		std::cout << "t1이 더 크다!" << std::endl;
	}
	else
	{
		std::cout << "t1이 더 작다!" << std::endl;

	}
}
