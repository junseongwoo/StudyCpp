/*
-- 둘 이상의 Type에 대해 템플릿 선언
*/
#include <iostream>
using namespace std;

template <class T1, class T2>
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2)num << endl;
}

int main()
{
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(65.8);
	ShowData<short, double>(67.2);
	ShowData<short, double>(70.4);
}