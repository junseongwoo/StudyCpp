/*
-- 클래스 템플릿과 static 멤버변수
static 멤버변수는 변수가 선언된 클래스의 객체간 공유가 가능한 변수 
*/

#include <iostream>
using namespace std;

template <typename T>
class SimpleStaticMem
{
private:
	static T mem;

public :
	void AddMem(int num) { mem += num; }
	void ShowMem() { cout << mem << endl; }
};

template <typename T>
T SimpleStaticMem<T>::mem = 0;  // static 멤버의 초기화 문장

int main()
{
	SimpleStaticMem<int> obj1;
	SimpleStaticMem<int> obj2;
	obj1.AddMem(2);
	obj1.AddMem(3);
	obj1.ShowMem();

	SimpleStaticMem<long> obj3;
	SimpleStaticMem<long> obj4;
	obj3.AddMem(100);
	obj4.ShowMem();
}