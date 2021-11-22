/*
객체를 생성하고 객체의 멤버변수 초기화 목적으로 InitMembers라는 함수를 만들고 호출했다.
정보은닉의 목적으로 멤버변수들을 private으로 선언했는데 불편하다.
'생성자'라는 것을 이용하면 객체를 생성과 동시에 초기화가 가능하다.
*/

#include <iostream>
using namespace std; 

class SimpleClass
{
private:
	int num1;
	int num2;

// 생성자 
// 클래스의 이름과 동일하다
// 반환형이 선언되어 있지 않으며, 실제로 반환하지 않는다.
// 객체 생성시 딱 한번 호출된다.

public:
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}