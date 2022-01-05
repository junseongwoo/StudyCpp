/*
-- 예외의 전달방식에 따른 주의사항
예외가 발생하면 해당 예외 데이터를 전달받을 수 있는 
catch 블록을 위에서 아래로 찾아내려 간다. 
적절한 catch 블록을 찾게 되면, 해당 catch 블록이 실행되며
예외의 처리는 완료된다.
*/

#include <iostream>
using namespace std;

class AAA
{
public:
	void ShowYou() { cout << "AAA exception!" << endl; }
};

class BBB : public AAA
{
public:
	void ShowYou() { cout << "BBB exception!" << endl; }
};

class CCC : public BBB
{
public:
	void ShowYou() { cout << "CCC exception!" << endl; }
};

void ExceptionGenerator(int expn)
{
	if (expn == 1)
	{
		throw AAA();
	}
	else if (expn == 2)
	{
		throw BBB();
	}
	else
		throw CCC();
}

int main()
{
	try
	{
		ExceptionGenerator(3);
		ExceptionGenerator(2);
		ExceptionGenerator(1);
	}
	catch (AAA& expn)
	{
		cout << "catch(AAA& expn)" << endl;
		expn.ShowYou();
	}

	catch (BBB& expn)
	{
		cout << "catch(BBB& expn)" << endl;
		expn.ShowYou();
	}

	catch (CCC& expn)
	{
		cout << "catch(CCC& expn)" << endl;
		expn.ShowYou();
	}
}