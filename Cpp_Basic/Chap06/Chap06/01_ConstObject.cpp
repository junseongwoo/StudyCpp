/*
-- const 객체와 const 객체의 특성들
ex) const int num = 10;     // 변수를 상수화 하듯이
ex) const SoSimple sim(20); // 객체도 상수화 할 수 있다.
객체에 const가 붙게 되면 객체의 데이터 변경을 허용하지 않는다.
때문에 const 멤버 함수의 호출만 허용하는 것 
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{

	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	obj.ShowData();
	return 0;
}