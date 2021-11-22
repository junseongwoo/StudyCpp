/*
-- C언어에서 Static
1. 전역변수에 선언된 static : 선언된 파일 내에서만 참조를 하겠다는 의미
2. 함수 내에 선언된 statc : 한번만 초기화되고, 지역변수와 달리 함수를 빠져나가도 소멸x
*/

// 함수 내에 선언된 static 예제
#include <iostream>
using namespace std;

void Counter()
{

	static int cnt;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	return 0;
}