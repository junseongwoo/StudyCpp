#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

/*
--객체 생성 과정
1. 메모리 공간의 할당
2. 이니셜라이저를 이용한 객체 초기화
3. 생성자의 몸체부분 실행
*/
int main(void)
{
	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();
	return 0;
}