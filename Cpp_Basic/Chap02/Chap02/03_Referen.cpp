#include <iostream>
using namespace std;

int main(void)
{
	// 참조자는 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름 
	// int num1 = 2010
	// int &num2 = num1 -> 변수 num1에 대한 참조자 num2 선언 
	// num1, num2 -> 2010 
	// num2 = 3000 
	// num1, num2 -> 3000 

	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL : " << num1 << endl; 
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;
	return 0;
}