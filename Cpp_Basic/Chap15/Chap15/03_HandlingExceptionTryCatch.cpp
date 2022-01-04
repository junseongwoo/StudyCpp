/*
-- try와 catch 그리고 throw의 이해

try 
{
	예외발생 예상 지역
}

catch (처리할 에외의 종류 명시)
{
	예외처리 코드의 삽입
}
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "두 개의 숫자 입력: ";
	cin >> num1 >> num2;

	try
	{
		if (num2==0)
		{
			throw num2;
		}
		cout << "나눗셈의 몫: " << num1 / num2 << endl;
		cout << "나눗셈의 나머지: " << num1 % num2 << endl;
	}
	catch (int expn)
	{
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요 " << endl;
	}
	cout << "end of main " << endl;
}