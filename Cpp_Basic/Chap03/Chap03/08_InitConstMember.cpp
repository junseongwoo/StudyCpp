// 멤버 초기화 리스트
// 함수 정의문과 본체 사이에 :을 찍고 콤마로 구분하여 나열

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

class Some
{
public :
	const int total;
	// 멤버 : 초깃값 형태, total(atotal)은 total = atotal과 같다
	Some(int atotal) : total(atotal) {} 
	// 즉, Some(int atotal) { total = atotal } 과 같다 
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}