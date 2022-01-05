/*
-- 모든 예외를 처리하는 catch 블록

catch(...)
{
	// ...은 전달되는 모든 예외를 다 받음
	그래서 마지막 catch문으로 온다.
}
*/

/*
-- 예외 던지기
catch 블록에 전달된 예외는 다시 던져질 수 있다.
이로 인해 하나의 예외가 둘 이상의 catch블록에 의해 처리되게 할 수 있음
*/

#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
	try
	{
		if (num2 == 0)
		{
			throw 0;
		}
		cout << "몫: " << num1 / num2 << endl;
		cout << "나머지 : " << num1 % num2 << endl;
	}
	catch (int expn)
	{
		cout << "first catch" << endl;
		throw;
	}
}

int main()
{
	try
	{
		Divide(9, 2);
		Divide(4, 0);
	}
	catch (int expn)
	{
		cout << "second catch" << endl;
	}
}