/*
-- 함수 템플릿의 특수화(Specialization)
*/

#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl; // 문자열을 비교할 경우 단순히 주소 값의 비교 결과 반환
}