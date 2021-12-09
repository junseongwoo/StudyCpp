/*
-- <<. >> 연산자의 오버로딩
Point 클래스를 대상으로 <<, >> 연산자를 오버로딩을 해볼 때 알아야 할 것
(1) cout은 ostream 클래스의 객체
(2) ostream은 이름공간 std 안에 선언되어 있며, 이의 사용을 위해서는 헤더파일 <iostream>을 포함해야함
*/

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public :
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

int main()
{
	Point pos1(1, 3);
	cout << pos1;
	Point pos2(101, 303);
	cout << pos2;
}