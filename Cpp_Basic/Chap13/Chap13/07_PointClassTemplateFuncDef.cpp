/*
-- 클래스 템플릿의 선언과 정의의 분리
클래스 템플릿도 멤버함수를 클래스 외부에 정의하는 것이 가능 
*/

#include <iostream>
using namespace std;

template <typename T> 
class Point
{
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0)
	{}
	void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{}

template <typename T>
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}

int main()
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(3.3, 4.4);
	pos2.ShowPosition();

	Point<char> pos3('p', 'a');
	pos3.ShowPosition();
}