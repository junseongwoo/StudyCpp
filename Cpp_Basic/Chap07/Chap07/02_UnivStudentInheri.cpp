/*
-- 상속의 문법적 이해 
1. 상속이란? 
ex) a 클래스가 b 클래스를 상속한다 
-> a 클래스는 b 클래스가 지니고 있는 모든 멤버를 물려받음
-> a 객체에는 a에 선언된 멤버뿐 아니라 b에 선언되어 있는 멤버도 존재하게 된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char *myname) : age(myage)
	{
		strcpy(name, myname);
	}

	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];

public:
	UnivStudent(const char * myname, int myage, const char *mymajor)
		: Person(myage, myname)
	{
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("LEE", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}