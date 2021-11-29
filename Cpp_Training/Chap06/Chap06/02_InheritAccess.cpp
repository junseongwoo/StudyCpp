/*
-- 상속과 정보 은폐
부모 클래스의 모든 멤버는 자식 클래스에 상속 
그러나 상속 받는 것과 마음대로 사용하는 것은 다른 문제

자식은 부모의 멤버를 소유하지만 부모가 허락하지 않은 멤버를 마음대로 읽을 수 없다.
private 멤버는 오로지 자기 자신만 사용 할 수 있기 때문에 
상속 관계의 자식 클래스라도 외부로 간주되어 액세스가 불가능하다.

protected 는 외부에서는 이 멤버를 읽을 수 없지만
자식 클래스에서는 읽을 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char *aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		std::cout << "이름 = " << name << ", 나이 = " << age << std::endl;
	}
};

class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char *aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		std::cout << "공부했다 공부" << std::endl;
	}

	void report() {
		std::cout << "이름 = " << name << ", 학번 = " << stunum << std::endl;
	}
};

int main()
{
	Student Woo("우준성", 29, 930430);
	Woo.intro();
	Woo.study();
	Woo.report();
}