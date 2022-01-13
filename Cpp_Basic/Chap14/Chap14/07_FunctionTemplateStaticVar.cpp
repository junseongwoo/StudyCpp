/*
-- 함수 템플릿과 static 지역변수
static 지역변수도 템플릿 함수 별로 각각 존재하게 된다.
*/

#include <iostream>
using namespace std;

template <typename T>
void ShowStaticValue(void)
{
	static T num = 0;
	num += 1;
	cout << num << " ";
}

int main()
{
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	cout << endl;
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	cout << endl;
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	cout << endl;

}