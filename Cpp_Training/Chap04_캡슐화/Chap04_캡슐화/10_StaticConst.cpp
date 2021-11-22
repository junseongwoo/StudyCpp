/*
객체별로 값이 달라지지 않는 고정된 상수라면 정적 상수 멤버로 선언
*/

#include <iostream>

class MathCalc
{
private:
	static const double pie;

public:
	MathCalc() {}
	void DoCalc(double r) {
		std::cout << "반지름이 " << r << "인 원의 둘레 = " << r * pie << std::endl;
	
	}
};
const double MathCalc::pie = 3.1416;

int main()
{
	MathCalc m;
	m.DoCalc(5);
}