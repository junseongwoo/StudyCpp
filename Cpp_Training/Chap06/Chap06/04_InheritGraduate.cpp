/*
-- C++ 상속의 특성
상속의 횟수나 깊이에는 제약이 없다.
사본을 만든다고 원본이 훼손되는 것이 아니어서 하나의 부모 ㅁ클래스로부터
특성이 조금씩 다른 자식 클래스를 얼마든지 파생 가능 
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
		std::cout << "공부 중" << std::endl;
	}
};

class Graduate : public Student
{
protected:
	char thesis[32];

public :
	Graduate(const char *aname, int aage, int astunum, const char *athesis)
		: Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	}

	void research() {
		std::cout << thesis << " 연구하고 논문 씀" << std::endl;
	}
};

int main()
{
	Graduate Woo("우준성", 29, 930, "딥러닝 비전");
	Woo.research();
}