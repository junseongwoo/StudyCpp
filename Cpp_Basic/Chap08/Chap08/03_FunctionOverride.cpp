/*
C++ 컴파일러는 포인터 연산의 가능성 여부를 판단 할 때, 포인터의 자료형을 기준으로 판단,
실제 가리키는 개체의 자료형을 기준으로 판단하지 않는다.

-- 결론 : 포인터 형에 해당하는 클래스에 정의된 멤버에만 접근 가능 
*/

#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	void MyFunc() { cout << " SecondFunc" << endl; }
};

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third * tptr = new Third();
	Second * sptr = tptr;
	First * fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}