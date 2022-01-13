/*
-- 04에서 문자열을 비교하려고 하면 주소 값으로 단순 비교가 됐었는데
템플릿 함수의 구성방법에 따라 예외를 두기 위해 함수 템플릿 특수화를 정의하고 사용 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

template <>
char * Max(char* a, char *b)
{
	cout << "char* Max<char*>(char* a, char *b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <>
const char * Max(const char* a, const char *b)
{
	cout << "const char* Max<const char*>(const char* a, const char *b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}


int main()
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl; 

	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl; 
}