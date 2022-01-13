/*
-- 예외 클래스와 예외 객체
예외객체 : 예외발생을 알리는데 사용되는 객체 
예외클래스 : 예외객체의 생성을 위해 정의된 클래스
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class DepositException
{
private:
	int reqDep;

public:
	DepositException(int money) : reqDep(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[예외 메시지: " << reqDep << "는 입금불가 ]" << endl;
	}
};

class WithdrawExcetion
{
private:
	int balance; 

public:
	WithdrawExcetion(int money) : balance(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[예외 메시지: 잔액" << balance << " : 잔액부족 ]" << endl;
	}
};

class Account
{
private:
	char accNum[50];
	int balance;

public:
	Account(const char * acc, int money) : balance(money)
	{
		strcpy(accNum, acc);
	}

	void Deposit(int money) throw (DepositException)
	{
		if (money < 0)
		{
			DepositException expn(money);
			throw expn;
		}
		balance += money;
	}

	void Withdraw(int money) throw (WithdrawExcetion)
	{
		if (money > balance)
		{
			throw WithdrawExcetion(balance);
		}
		balance -= money;
	}

	void ShowMyMoney()
	{
		cout << "잔고 : " << balance << endl << endl;
	}
};

int main()
{
	Account myAcc("12345-78945", 5000);

	try
	{
		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}
	catch (DepositException &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();

	try
	{
		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);
	}
	catch (WithdrawExcetion &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();
}