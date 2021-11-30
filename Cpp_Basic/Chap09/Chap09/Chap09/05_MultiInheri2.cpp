/*
-- 다중상속의 모호성(Ambiguous)
다중상속의 대상이 되는 
두 기초 클래스에 동일한 이름의 멤버가 존재하는 경우에는 문제가 발생 할 수 있다.
이 경우, 유도 클래스 내에서 멤버의 이름만으로 접근이 불가능하기 때문! 

이름만으로 접근 할 경우 컴파일러에서 어느 클래스에 선언된 멤버에 접근 해야하는지 알 수 없다.
*/

#include <iostream>

class BaseOne
{
public:
	void SimpleFunc() { std::cout << "BaseOne" << std::endl; }
};

class BaseTwo
{
public:
	void SimpleFunc() { std::cout << "BaseTwo" << std::endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo
{
public:
	void ComplexFunc()
	{
		BaseOne::SimpleFunc();
		BaseTwo::SimpleFunc();
	}
};

int main()
{
	MultiDerived mdr;
	mdr.ComplexFunc();
}