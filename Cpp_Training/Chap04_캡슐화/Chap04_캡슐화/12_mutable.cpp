/*
-- mutable 지정자는 상수 함수나 상수 객체에 예외를 지정하여
상수성과 상관없이 언제나 수정이 가능하게 만든다.
*/

#include <iostream>

class Some
{
private:
	mutable int temp;
	
public:
	Some() {}
	void method() const { temp = 0; }
};

int main()
{
	Some s;
	s.method();

	const Some t;
	t.method();
}