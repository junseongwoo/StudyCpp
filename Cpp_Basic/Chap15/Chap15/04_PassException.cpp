/*
-- 예외의 전달
Divide라는 함수를 호출 했을때 그 안에서 throw절이 실행되면서 예외가 발생
그런데 Divide 안에서 try ~ catch문이 존재하지 않음 
그렇다면 예외처리가 어떻게 발생하는가? 
-> 예외처리에 대한 책임은 Divide를 호출한 영역으로 넘어감 
따라서 발생한 예외는 Divide를 호출한 영역으로 전달
*/

#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
	if(num2 == 0)
	{
		throw num2;
	}
	cout << "나눗셈의 몫: " << num1 / num2 << endl;
	cout << "나눗셈의 나머지: " << num1 % num2 << endl;
}

int main()
{
	int num1, num2;
	cout << "두 개의 숫자 입력: ";
	cin >> num1 >> num2;

	try
	{
		Divide(num1, num2);
		cout << "나눗셈을 마쳤습니다." << endl;
	}
	catch (int expn)
	{
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요 " << endl;
	}
}