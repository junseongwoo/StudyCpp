/*
--- 가상함수의 동작원리와 가상함수 테이블

AAA에 virtual로 선언된 가상함수가 존재 
-> 한 개 이상의 가상함수를 포함하는 클래스에 대해서는 컴파일러가 
가상함수 테이블 (V-Table)를 만든다. -> 실제 호출되어야 할 함수의 위치정보를 담고 있는 테이블

가상함수 테이블에 key와 value가 있다.
key는 함수를 구분하는 구분자 역할, value는 구분자에 해당하는 함수의 주소 정보를 알려주는 역할

--- 가상함수 테이블이 참조되는 방식
main 함수가 호출되기 이전에 다음의 구조로 가상함수 테이블이 메모리 공간에 할당 
가상함수 테이블은 객체의 생성과 상관없이 메모리 공간에 할당 
-> 가상함수 테이블이 멤버함수의 호출에 사용되는 일종의 데이터이기 때문

*/

#include <iostream>

class AAA
{
private:
	int num1;

public:
	virtual void Func1() { std::cout << "Func1" << std::endl; }
	virtual void Func2() { std::cout << "Func2" << std::endl; }
};

class BBB : public AAA
{
private :
	int num2;

public:
	virtual void Func1() { std::cout << "BBB::Func1" << std::endl; }
	void Func3() { std::cout << "Func3" << std::endl; }
};

int main(void)
{
	AAA *aptr = new AAA();
	aptr->Func1();

	BBB* bptr = new BBB();
	bptr->Func1();
}