/*
-- 스택 풀기(Stack Unwinding)
예외가 처리되지 않아, 함수를 호출한 영역으로 예외 데이터가 전달되는 현상
*/

#include <iostream>
using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main()
{
	try
	{
		SimpleFuncOne();
	}
	catch (int expn)
	{
		cout << "예외코드 : " << expn << endl;
	}
}

void SimpleFuncOne(void)
{
	cout << "SimpleFuncOne(void)" << endl;
	SimpleFuncTwo();
}

void SimpleFuncTwo(void)
{
	cout << "SimpleFuncTwo(void)" << endl;
	SimpleFuncThree();
}

void SimpleFuncThree(void)
{
	cout << "SimpleFuncThree(void)" << endl;
	throw - 1;
}