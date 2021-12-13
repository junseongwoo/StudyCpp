/*
-- 객체간 대입연산의 비밀 : 디폴트 대입 연산자
복사 생성자 특성
(1) 정의하지 않으면 디폴트 복사 생성자 삽입
(2) 티폴트 복사 생성자는 멤버 대 멤버의 복사 (얕은 복사)를 진행
(3) 생성자 내에서 동적 할당을 한다면, 그리고 깊은 복사가 필요하다면 직접 정의해야 함

대입 연산자 특성 
(1) 정의하지 않으면 디폴트 대입 연산자 삽입
(2) 디폴트 대입 연산자는 멤버 대 멤버 복사 (얕은 복사) 진행
(3) 연산자 내에서 동적 할당을 한다면, 그리고 깊은 복사가 필요하다면 직접 정의해야함 
*/

#include <iostream>
using namespace std;

class First
{
private:
	int num1, num2;

public:
	First(int n1 = 0, int n2=0) : num1(n1), num2(n2)
	{}
	void ShowData() { cout << num1 << ", " << num2 << endl; }
};

class Second
{
private:
	int num3, num4;

public:
	Second(int n3=0, int n4 =0) :num3(n3), num4(n4)
	{}
	void ShowData() { cout << num3 << ", " << num4 << endl; }

	Second& operator=(const Second& ref)
	{
		cout << "Second& operator=()" << endl;

		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
};

int main()
{
	First fsrc(111, 222);
	First fcpy;
	Second ssrc(333, 444);
	Second scpy;
	fcpy = fsrc;
	scpy = ssrc;
	fcpy.ShowData();
	scpy.ShowData();

	First fob1, fob2;
	Second sob1, sob2;
	fob1 = fob2 = fsrc;
	sob1 = sob2 = ssrc;

	fob1.ShowData();
	fob2.ShowData();
	sob1.ShowData();
	sob2.ShowData();
}