/*
-- 객체 포인터의 참조관계
객체 포인터 변수 : 객체의 주소 값을 저장하는 포인터 변수

객체 포인터는 객체 뿐만아니라 객체를 상속하는 유도 클래스의 객체도 가리킬 수 있다.

C++ 에서 A형 포인터 변수는 
A객체 또는 A를 직접, 간접적으로 상속하는 모든 객체를 가리킬 수 있다.
( 객체의 주소 값을 저장할 수 있다. )`
*/

#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public :
	void Study() { cout << "Study" << endl; }
};

class  PartTimeStudent : public Student
{
public :
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	Person *ptr1 = new Person();
	Student *ptr2 = new Student();
	PartTimeStudent *ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Study();
	ptr3->Work();
	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}