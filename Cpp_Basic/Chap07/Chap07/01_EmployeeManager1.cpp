/*
-- 상속(Inheritance) 

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char *name, int money)
		: salary(money)
	{
		strcpy(this->name,name);
	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name : " << name << endl;
		cout << "salary : " << salary << GetPay() << endl << endl; 
	}

};

// 기능의 처리를 실제로 담당하는 클래스를 컨트롤 클래스 또는 핸들러 클래스라 한다.
class EmployeeHandler
{
private:
	PermanentWorker *empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{}

	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum : " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

int main(void)
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 직원등록
	handler.AddEmployee(new PermanentWorker("kim", 1000));
	handler.AddEmployee(new PermanentWorker("woo", 1000));
	handler.AddEmployee(new PermanentWorker("min", 1000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 지불해야할 급여 총합
	handler.ShowTotalSalary();

	return 0;
}