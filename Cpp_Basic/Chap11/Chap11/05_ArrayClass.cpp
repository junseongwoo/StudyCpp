/*
-- 배열보다 나은 배열 클래스
[] 연산자 오버로딩을 사용하여 배열 클래스를 만든다.

arrObject[2]의 해석
(1) 객체 arrObject의 멤버함수 호출로 이어진다.
(2) 연산자가 [] 이므로 멤버함수의 이름은 'operator []' 이다.
(3) 함수호출 시 전달되는 인자의 값은 정수 2이다.

즉, arrObject[2] == arrObject.operator[] (2); 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;

public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int & operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};

void main()
{
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 11;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
}