/*
-- dynamic_cast : 상속관계에서의 안전한 형 변환
형태 : dynamic_cast<T>(expr)
T는 변환하고자 하는 자료형을 이름을 두되, 객체의 포인터 또는 참조형이 와야함 
expr은 변환의 대상이 와야함.
요구한 형 변환이 적절하지 않을 경우 컴파일 에러 발생

적절한 형 변환 : 상속관게에 놓여 있는 두 클래스 사이에서 유도 클래스의 포인터 
및 참조형 데이터를 기초 클래스의 포인터 및 참조형 데이터로 형 변환 하는 경우

dynamic_cast 의미 : 상속관계에 있는 유도클래스의 포인터 및 참조형 데이터를 
기초 클래스의 포인터 및 참조형 데이터로 형 변환하겠다! 
*/

#include <iostream>
using namespace std;

class Car
{
private:
	int fuelGauge;

public:
	Car(int fuel) : fuelGauge(fuel)
	{}
	void ShowCarState() { cout << "잔여 연료양 : " << fuelGauge << endl; }
};

class Truck : public Car
{
private:
	int freightWeight;

public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight)
	{}

	void ShowTruckState()
	{
		ShowCarState();
		cout << "화물의 무게 : " << freightWeight << endl;
	}
};

int main()
{
	Car * pcar1 = new Truck(80, 200);
	Truck *ptruck1 = dynamic_cast<Truck*>(pcar1);

	Car * pcar2 = new Car(120);
	Truck *ptruck2 = dynamic_cast<Truck*>(pcar2);

	Truck *ptruck3 = new Truck(70, 150);
	Car * pcar3 = dynamic_cast<Car*>(ptruck3);
}