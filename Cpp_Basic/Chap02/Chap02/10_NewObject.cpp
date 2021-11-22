#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public: 
	Simple()
	{
		cout << "I am simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	// new 연산자를 이용해서 힙 영역에 변수 할당
	Simple * sp1 = new Simple; 

	cout << "case 2: ";
	// malloc 함수호출을 통해서 힙 영역에 변수를 할당 
	Simple * sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;

	// 할당 방법에 따른 소멸 
	delete sp1;
	free(sp2);

	return 0;
}