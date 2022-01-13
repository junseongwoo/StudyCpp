/*
-- 표준 string 클래스의 분석
앞서 STDString에서 string 클래스를 대체하는 String 클래스 정의를 위해 요구 되는 것 
(1) 문자열을 인자로 전달받는 생성자 정의
(2) 생성자, 소멸자, 복사 생성자 그리고 대입 연산자의 정의
(3) 결합된 문자열로 초기화된 객체를 반환하는 + 연산자의 오버로딩
(4) 문자열을 덧붙이는 += 연산자의 오버로딩
(5) 내용비교를 진행하는 == 연산자의 오버로딩
(6) 콘솔 입출력이 가능하도록 <<, >> 연산자의 오버로딩 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class String
{
private :
	int len;
	char * str;

public : 
	String();
	String(const char *s);
	String(const String& s);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);

	friend ostream& operator << (ostream& os, const String& s);
	friend istream& operator >> (istream& is, const String& s);
};

String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char *s)
{
	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
}

String::String(const String& s)
{
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}

String::~String()
{
	if (str != NULL)
		delete[]str;
}

String& String::operator= (const String& s)
{
	if (str!=NULL)
	{
		delete[] str;
	}
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+= (const String& s)
{
	len += (s.len - 1);
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str!=NULL)
	{
		delete[] str;
	}
	str = tempstr;
	return *this;
}

bool String::operator== (const String& s)
{
	return strcmp(str, s.str) ? false : true;
}

String String::operator+(const String& s)
{
	char *tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr);
	delete[]tempstr;
	return temp;
}

ostream& operator<< (ostream& os, const String& s)
{
	os << s.str;
	return os;
}

istream& operator>> (istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}

int main()
{
	String str1 = "I like ";
	String str2 = "string class";
	String str3 = str1 + str2;

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

	String str4;
	cout << "문자열 입력 : ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;
}