/*
-- 클래스 템플릿의 특수화
클래스 템플릿을 특수화 하는 이유는 
특정 자료형을 기반으로 생성된 객체에 대해,
구분이 되는 다른 행동양식을 적용하기 위해서
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos <<']' << endl;
	}
};

template <typename T>
class SimpleDataWrapper
{
private:
	T mdata;

public:
	SimpleDataWrapper(T data) : mdata(data)
	{}

	void ShowDataInfo(void)
	{
		cout << "Data : " << mdata << endl;
	}
};

template <>
class  SimpleDataWrapper <char*>
{
private:
	char *mdata;

public:
	SimpleDataWrapper(char * data)
	{
		mdata = new char[strlen(data) + 1];
		strcpy(mdata, data);
	}

	void ShowDataInfo(void)
	{
		cout << "String : " << mdata << endl;
		cout << "Length : " << strlen(mdata) << endl;
	}
	~SimpleDataWrapper()
	{
		delete[]mdata;
	}
};

template <>
class SimpleDataWrapper <Point<int>>
{
private:
	Point<int> mdata;

public:
	SimpleDataWrapper(int x, int y) : mdata(x, y)
	{}

	void ShowDataInfo(void)
	{
		mdata.ShowPosition();
	}
};

int main(void)
{
	SimpleDataWrapper<int> iwrap(170);
	iwrap.ShowDataInfo();
	SimpleDataWrapper<const char*> swrap("Class Template Specialization");
	swrap.ShowDataInfo();
	SimpleDataWrapper<Point<int>> poswrap(3, 7);
	poswrap.ShowDataInfo();

}