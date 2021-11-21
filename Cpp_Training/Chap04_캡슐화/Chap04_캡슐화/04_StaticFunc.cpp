/*
-- 정적 멤버 함수
정적 멤버 함수는 객체가 아닌 클래스와 연관되어
모든 객체에 공통적인 작업을 처리

선언 할 때 함수 원형 앞에 static을 붙이며 
외부에 작성할 떄는 static 키워드를 생략 
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
	static void InitCount() {
		count = 0;
	}

	static void OutCount() {
		printf("현재 객체 개수 = %d\n", count);
	}
};
int Simple::count;

int main()
{
	Simple::InitCount();
	Simple::OutCount();
	Simple s, *ps;
	Simple::OutCount();
	ps = new Simple();
	Simple::OutCount();
	delete ps;
	Simple::OutCount();
	printf("크기 = %d\n", sizeof(s));

}