/*
--- 다중상속 
*/

#include <iostream>

class BaseOne
{
public:
	void simplefuncOne() { std::cout << "BaseOne" << std::endl; }
};

class BaseTwo
{
public:
	void SimpleFuncTwo() { std::cout << "BaseTwo" << std::endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo
{
public:
	void ComplexFunc()
	{
		simplefuncOne();
		SimpleFuncTwo();
	}
};

int main()
{
	MultiDerived mdr;
	mdr.ComplexFunc();
}