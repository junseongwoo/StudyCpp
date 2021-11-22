#include <iostream>
using namespace std;

/*
SoSimple sim2(sim1)  == SoSimple sim2=sim1 해석
- SoSimple형 객체를 생성해라
- 객체의 이름은 sim2
- sim1을 인자로 받을 수 있는 생성자의 호출을 통해 객체 생성
*/
class SoSimple
{
private:
	int num1;
	int num2;

public: 
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{
		// empty
	}
	SoSimple(SoSimple &copy)
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1; // SoSimple sim2(sim1)으로 변환
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}