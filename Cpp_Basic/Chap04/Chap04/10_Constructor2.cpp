#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1, num2;

public: 
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

/*
-- 보통 하수의 원형은 전역적으로(함수 밖에) 선언하지만, 
밑 코드 처럼 함수 내에 지역적으로도 선언 가능하다.
-- SimpleClass sc1()가 이러한 함수의 원형 선언에 해당한다.
즉, 이 문장을 void형 생성자의 호출문으로 인정한다면 
컴파일러에서는 이것을 객체생성문인지 함수의 원형선언인지를 구분할수 없게된다.
---- 그렇기 때문에 이러한 유형은 함수의 원형선언에만 사용하기로 약속했다! 
*/
int main(void)
{
	SimpleClass sc1();
	SimpleClass mysc = sc1();
	mysc.ShowData();

	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}