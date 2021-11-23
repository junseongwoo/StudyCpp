/*
-- °¡»ó ¼Ò¸êÀÚ(Virtual Destructor) 
*/

#include <stdio.h>
#include <iostream>

class First
{
private :
	char *strOne;

public:
	First(const char *str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First()
	{
		printf("~First()\n");
		delete[]strOne;
	}
};

class Second : public First
{
private :
	char * strTwo;

public:
	Second(const char * str1, const char *str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	virtual ~Second()
	{
		printf("~Second()\n");
		delete[]strTwo;
	}
};

int main()
{
	First *ptr = new Second("Simple", "Complex");
	delete ptr;
}