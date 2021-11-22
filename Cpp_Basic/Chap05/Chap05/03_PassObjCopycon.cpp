/*
- 복사 생성자가 호출되는 시점?
case 1 : 기존에 생성된 객체를 이용해서 새로운 객체를 초기화하는 경우 
case 2 : Call-by-value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우
case 3 : 객체를 반환하되, 참조형으로 반환하지 않는 경우 
*/

/*
- 메모리 공간의 할당과 초기화가 동시에 일어나는 상황
ex) int num1 = num2;

- 함수가 값을 반환하면, 별도의 메모리 공간이 할당되고, 이 공간에 반환 값이 저장된다
---- 반환 값으로 초기화 된다
*/

/*
할당 이후, 복사 생성자를 통한 초기화
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public: 
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData()
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후" << endl;

	return 0;
}