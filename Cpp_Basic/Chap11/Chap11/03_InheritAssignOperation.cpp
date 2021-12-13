/*
-- 상속 구조에서의 대입 연산자 호출 
대입 연산자는 생성자가 아니다!
-> 유도 클래스의 생성자에는 아무런 명시를 하지 않아도
기초 클래스의 생성자가 호출되지만,

유도 클래스의 대입 연산자에는 아무런 명시를 하지 않으면,
기초 클래스의 대입 연산자가 호출되지 않는다.
*/

#include <iostream>
using namespace std; 

class First 
{
private:
	int n1, n2;

public:
	First(int n1=0, int n2=0) : n1(n1), n2(n2)
	{}

	void ShowData()
	{
		cout << n1 << ", " << n2 << endl;
	}

	First & operator=(const First& ref)
	{
		cout << "First& operator=()" << endl;
		n1 = ref.n1;
		n2 = ref.n2;
		return *this;
	}
};

class Second : public First
{
private:
	int n3, n4;
	
public:
	Second(int n1, int n2, int n3, int n4)
		: First(n1, n2), n3(n3), n4(n4)
	{}

	void ShowData()
	{
		First::ShowData();
		cout << n3 << ", " << n4 << endl;
	}

	Second & operator=(const Second& ref)
	{
		cout << "First& operator=()" << endl;
		n3 = ref.n3;
		n4 = ref.n4;
		return *this;
	}
};

int main()
{
	Second ssrc(111, 222, 333, 444);
	Second scpy(0, 0, 0, 0);
	scpy = ssrc;
	scpy.ShowData();
}