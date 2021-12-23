/*
-- 함수 템플릿과 템플릿 함수

함수 템플릿 
template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

템플릿 함수 : 위 템플릿 기반으로 컴파일러가 만들어내는 함수
컴파일러에 의해 생성된 함수이기 때문에 '생성된 함수(Generated Function)'으로도 불린다.
*/

#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	cout << "T Add(T num1, T num2)" << endl;
	return num1 + num2;
}

int Add(int num1, int num2)
{
	cout << "Add(int num1, int num2)" << endl;
	return num1 + num2;
}

double Add(double num1, double num2)
{
	cout << "Add(double num1, double num2)" << endl;
	return num1 + num2;
}

int main()
{
	cout << Add(5, 7) << endl;
	cout << Add(3.7, 7.5) << endl;
	cout << Add<int>(5, 7) << endl;
	cout << Add<double>(3.7, 7.5) << endl;
}