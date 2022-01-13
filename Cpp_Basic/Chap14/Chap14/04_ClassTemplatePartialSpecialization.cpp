/*
-- 클래스 템플릿의 부분 특수화
*/

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class MySimple
{
public:
	void WhoAreYou()
	{
		cout << "size of T1 : " << sizeof(T1) << endl;
		cout << "size of T2 : " << sizeof(T2) << endl;
		cout << "<typename T1, typename T2>" << endl;
	}
};

template <>
class MySimple<int, double>
{
public:
	void WhoAreYou()
	{
		cout << "size of int : " << sizeof(int) << endl;
		cout << "size of double : " << sizeof(double) << endl;
		cout << "<int, double>" << endl;
	}
};

int main()
{
	MySimple<char, double> obj1;
	obj1.WhoAreYou();

	MySimple<int, long> obj2;
	obj2.WhoAreYou();

	MySimple<int, double> obj3;
	obj3.WhoAreYou();
}