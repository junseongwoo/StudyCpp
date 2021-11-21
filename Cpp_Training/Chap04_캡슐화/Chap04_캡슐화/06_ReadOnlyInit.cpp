/*
-- 읽기 전용 자원의 초기화
한번 조사한 정보를 정적 멤버에 저장 
scrx, scry = windows의 크기 
*/

#include <stdio.h>
#include <Windows.h>

class Shape
{
private:
	int shapeType;
	RECT shapeArea;
	COLORREF color;

public:
	static int scrx, scry;
	static void GetScreenSize();

};

int Shape::scrx;
int Shape::scry;

void Shape::GetScreenSize()
{
	scrx = GetSystemMetrics(SM_CXSCREEN);
	scry = GetSystemMetrics(SM_CYSCREEN);
}

int main()
{
	Shape::GetScreenSize();
	Shape C, E, R;
	printf("화면 크기 = (%d,%d)\n", Shape::scrx, Shape::scry);
}