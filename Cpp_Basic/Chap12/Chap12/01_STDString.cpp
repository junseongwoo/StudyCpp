/*
-- 표준 String 클래스
문자열 처리를 목적으로 정의된 클래스, 헤더파일 <string>을 포함해야함 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "I like ";
	string str2 = "string class";
	string str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	
	if (str1 == str3)
	{
		cout << "동일 문자열!" << endl;
	}
	else
	{
		cout << "동일하지 않은 문자열!" << endl;
	}

	string str4; 
	cout << "문자열 입력 : "; 
	cin >> str4; 
	cout << "입력한 문자열: " << str4 << endl;
}