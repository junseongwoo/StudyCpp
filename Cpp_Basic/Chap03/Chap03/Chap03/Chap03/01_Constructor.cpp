#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private: 
	char name[12];
	int age;

public:
	// 생성자 
	// 생성자는 컴파일러가 자동으로 호출하기 때문에 
	// 클래스와 이름이 같고 초기화만 담당해 리턴값은 없다. 
	Human(const char *aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	// 생성자를 호출하는 2가지 방법
	// 1. 명시적인 방법 Human Kim = Human("김상형", 29);
	// 2. 암시적인 방법 Human kim("김상형" , 29);
	Human kim("김상형", 29);
	kim.intro();
}