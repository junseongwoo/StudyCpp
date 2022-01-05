/*
-- new 연산자에 의해서 발생되는 예외
new 연산에 의한 메모리 공간의 할당이 실패하면 
bad_alloc이라는 예외가 발생한다.
bad_alloc은 <new> 헤더파일의 예외 클래스로써 메모리 공간의 할당이 실패했음을 알리는 의도
*/

#include <iostream>
#include <new>
using namespace std;

int main()
{
	int num = 0;

	try
	{
		while (1)
		{
			num++;
			cout << num << "번째 할당 시도" << endl;
			new int[10000][10000];
		}
	}
	catch (bad_alloc &bad)
	{
		cout << bad.what() << endl;
		cout << "더 이상 할당 불가!" << endl;
	}
}