//객체의 동적 생성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char *pname;
	int age;

public:
	Human(const char *aname, int aage)
	{
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("== <%s> 객체 생성 == \n", pname);
	}

	~Human()
	{
		printf("==<%s> 객체가 파괴 ==\n", pname);
		delete[] pname;
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", pname, age);
	}
};

int main()
{
	Human boy("김수한", 12);
	boy.intro(); // 객체를 정적으로 호출 해서 .intro() 사용 

	Human *leo; 
	leo = new Human("디카프리오", 40);
	leo->intro(); // 객체를 포인터로 호출 했기때문에 -> 사용
	delete leo;   
	// 정적으로 호출한 객체는 범위를 벗어나면 자동으로 파괴
	// 동적으로 호출한 객체는 delete로 파괴 해줘야함 
}