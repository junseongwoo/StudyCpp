/*
-- 상속의 액세스 지정
클래스 선언문의 기반 클래스 이름 앞에 상속 액세스 지정자가 오는데 
상속되는 멤버의 액세스 지정자를 자식 클래스에서 어떻게 변경할 것인지 지정한다.

-- 멤버 함수 재정의
상속 시 특수한 경우를 제외하고 기반 클래스의 모든 멤버는 파생 클래스로 무조건 상속 
정 원치 않는 멤버가 있다면 자식은 둘 중 하나를 택해야함 
(1) 전혀 필요치 않은 멤버라면 완전히 무시, 안쓰면 그만
(2) 필요는 하지만 용도와 맞지 않다면 약간 바꿔 사용,
상속받은 멤버 함수를 같은 원형으로 다시 정의하여 동작을 수정하는 것을 
재정의(Overrideing)라고 한다.
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

	void intro() {
		std::cout << stunum << " 학번 ," << name << " 입니다." << std::endl;
	}
};

int main()
{
	Human Woo("우준성", 29);
	Woo.intro();
	Student Oh("오휘연", 30, 123456);
	Oh.intro();
}