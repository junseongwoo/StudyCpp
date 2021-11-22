/*
--캡슐화가 왜 필요한가? (감기약을 예시로 했음)
1. 복용의 절차가 너무 복잡 -> 콧물 약 + 재채기 약 + 코막힘 약 
2. 복용의 순서가 정확해야 함 -> 부작용 초례

결론 : 캡슐화를 통해 복잡도를 낮추고 간결하게 만들 수 있다.
*/

#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const
	{
		cout << "콧물이 안납니다." << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "재채기가 멎습니다." << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "코가 뚫립니다." << endl;
	}
};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;

}