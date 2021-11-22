/*
-- 멤버 이니셜라이저를 이용한 변수 및 const 상수 초기화 
-- 이니셜라이저를 이용하면 선언과 동시에 초기화가 이뤄지는 형태로 바이너리 코드가 생성
-- const 멤버변수도 이니셜라이저를 이용하면 초기화가 가능하다! 
*/

#include <iostream>
using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money)
		// 이니셜라이즈 초기화
		: APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

};
