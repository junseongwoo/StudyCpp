/*
-- 함수를 대상으로 템플릿 이해 
함수 템플릿은 함수를 만들어냄 : 함수의 기능은 결정되어 있지만 자료형은 결정해야 한다.
즉, 함수 템플릿은 함수를 만드는 도구가 된다. 
함수 템플릿도 다양한 자료형의 함수를 만들어 낼 수 있다.
*/

#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	cout << Add<int>(15, 30) << endl;
	cout << Add<int>(1.3, 2.7) << endl;
	cout << Add<double>(15, 30) << endl;
	cout << Add<double>(1.3, 2.7) << endl;
}