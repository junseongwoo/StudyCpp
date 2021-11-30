/*
-- 클래스 확장 
Inheritance의 사전적 의미는 부모의 모든 것을 자식에게 물려주는 것 
OPP의 상속도 비슷하다.

상속에 의해 발생하는 긍정적인 효과
1. 기존 클래스를 재활용
2. 공통 부분을 상위 클래스에 통합하여 반복을 제거
3. 공동의 조상을 가지는 클래스 계층을 형성하여 다형성을 구현

컴파일러가 부모 클래스의 모든 멤버를 자식 클래스로 복사하여 
{} 괄호 안에 자식이 추가할 멤버를 선언
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char *aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		std::cout << "이름 = " << name << "나이 = " << age << std::endl;
	}
};

class Student : public Human
{
private:
	int stunum;

public:
	Student(const char *aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		std::cout << "이이는 사 이삼은 육 이사는 팔" << std::endl;
	}
};

int main()
{
	Human kim("김상형", 29);
	kim.intro();
	Student han("김한결", 15, 123456);
	han.intro();
	han.study();
}