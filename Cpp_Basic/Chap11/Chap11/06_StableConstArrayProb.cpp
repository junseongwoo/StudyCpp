/*
-- const 함수를 이용한 오버로딩의 활용
앞서 만든 04 클래스에는 제약이 존재하는 것을 확인 해본다.
04_cpp에 배열의 길이를 반환하는 함수 추가
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;
	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}

public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen() const { return arrlen; }
	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};

/*
operator에 const로 선언되어 있지 않기 때문에 발생하는 에러
const BoundCheckIntArray& ref로 ref는 const 선언을 했지만
operator에는 const 처리가 되어 있지 않아서 에러가 발생함 
*/
void ShowAllData(const BoundCheckIntArray& ref)
{
	int len = ref.GetArrLen();
	for (int idx = 0; idx < len; idx++)
	{
		cout << ref[idx] << endl;
	}
}

void main()
{
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 11;
	}
	
	ShowAllData(arr);
}