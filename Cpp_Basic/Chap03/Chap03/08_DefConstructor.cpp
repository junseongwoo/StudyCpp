// 디폴트 생성자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human() {
		strcpy(name, "이름없음");
		age = 0;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human momo; // 디폴트 생성자를 쓰려면 괄호도 없이 써야함

	// 괄호를 쓰려면
	Human momo2 = Human(); 
	// 위의 형태로 써야한다. 이는 객체를 선언하는 것이 아니라 
	// Human 타입의 객체를 리턴하는 함수의 원형을 선언하는 것 
	momo.intro();
}