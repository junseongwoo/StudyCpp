/*
--Static 멤버변수의 또 다른 접근 방법
static 멤버가 private으로 선언되면, 해당 클래스의 객체들만 접근이 가능하지만
public으로 선언되면 클래스의 이름 또는 객체의 이름을 통해 어디서든 접근 가능 
*/

#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;

public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	
	return 0;
}