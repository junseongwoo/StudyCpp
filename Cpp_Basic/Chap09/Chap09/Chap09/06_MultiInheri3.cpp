/*
-- 가상상속 (Virtual Inheritance)
virtual로 base 클래스를 상속하지 않으면
LastDerived가 MiddelOne, Two를 상속 할 때 Base 클래스가 두 번 생성 된다
virtual로 생성하여 Base클래스를 딱 한번만 상속하게끔 만들었다.
*/

#include <iostream>

class Base
{
public:
	Base() { std::cout << "Base Constructor" << std::endl; }
	void SimpleFunc() { std::cout << "BaseOne" << std::endl; }
};

class MiddleDerivedOne : virtual public Base
{
public:
	MiddleDerivedOne() : Base()
	{
		std::cout << "MiddleDerivedOne Constructor" << std::endl;
	}

	void MiddleFuncOne()
	{
		SimpleFunc();
		std::cout << "MiddleDerivedOne" << std::endl;
	}
};

class MiddleDerivedTwo : virtual public Base
{
public:
	MiddleDerivedTwo() : Base()
	{
		std::cout << "MiddleDerivedTwo Constructor" << std::endl;
	}

	void MiddleFuncTwo()
	{
		SimpleFunc();
		std::cout << "MiddleDerivedTwo" << std::endl;
	}
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public :
	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo()
	{
		std::cout << "LastDerived Constructor" << std::endl;
	}

	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();
	}
};

int main()
{
	std::cout << "객체생선 전 ...... " << std::endl;
	LastDerived ldr;
	std::cout << "객체생선 후 ...... " << std::endl;
	ldr.ComplexFunc();

}