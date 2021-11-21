/*
** 정적 멤버 변수
-- 정적 멤버는 모든 객체가 공유 
전역 변수로 쓰면 캡슐화가 되지 않으며 독립성이 떨어져 재사용이 어렵고
외부에서 바꾸어도 방어 할 수 없다.

-- 그렇지만 static (정적)으로 쓴다면 이를 해결 
*/

#include <stdio.h>

class Simple
{
private:
	int value;
	static int count;

public:
	Simple() { count++; }
	~Simple() { count--; }
	void OutCount() {
		printf("현재 객체 개수 = %d\n", count);
	}
};
int Simple::count = 0;

int main()
{
	Simple s, * ps;
	s.OutCount();
	ps = new Simple();
	ps->OutCount();
	delete ps;
	s.OutCount();
	printf("크기 = %d\n", sizeof(s));
}