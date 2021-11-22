/*
-- static 멤버함수
static 멤버함수는 static 멤버변수와 동일
1. 선언된 클래스의 모든 객체가 공유
2. public로 선언되면, 클래스의 이름을 이용해 호출 가능
3. 객체의 멤버로 존재하는 것이 아님

즉, static 멤버함수 내에서는 static 멤버변수와 static 멤버함수만 호출 가능 
*/

// cosnt static 멤버
// 클래스 내에 선언된 const 멤버변수의 초기화는 이니셜라이저를 통해야만함
// const static으로 선언되는 멤버변수는 선언과 동시에 초기화가 가능

#include <iostream>
using namespace std;

class CounteryArea
{
public:
	// const static 멤버변수는 클래스가 정의될 때 유지되는 상수이기 때문에 초기화가 가능
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{
	cout << "러시아 면적 : " << CounteryArea::RUSSIA << "km" << endl;
	cout << "캐나다 면적 : " << CounteryArea::CANADA << "km" << endl;
	cout << "중국 면적 : " << CounteryArea::CHINA << "km" << endl;
	cout << "한국 면적 : " << CounteryArea::SOUTH_KOREA << "km" << endl;

	return 0;
}