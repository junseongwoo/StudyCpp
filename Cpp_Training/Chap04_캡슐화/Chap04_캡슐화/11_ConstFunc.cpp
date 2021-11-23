/*
-- 상수 멤버 함수는 객체의 상태를 읽기만 하는 함수 

함수 원형의 앞쪽은 리턴 타입을 지정하기 때문에 const 지정자를 함수명 뒤에 붙혀
멤버 변수를 읽기만 하고 변경하지 않는다고 알리는 것이다.
*/

#include <iostream>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		SetTime(h, m, s);
	}

	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() const {
		std::cout << "현재 시간은 " << hour << " : " << min
			<< " : " << sec << std::endl;
	}
};

int main()
{
	Time now(12, 34, 56);
	now.SetTime(11, 22, 33);
	now.OutTime();

	const Time meeting(16, 00, 00);
	meeting.OutTime();
}
