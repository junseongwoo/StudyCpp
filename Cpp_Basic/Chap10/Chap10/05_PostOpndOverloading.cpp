/*
-- 전위증가와 후위증가의 구분

(1) ++pos  ->  pos.operator++();
(2) pos++  ->  pos.operator++(int);

(1) --pos  ->  pos.operator--();
(2) pos--  ->  pos.operator--(int);
*/

/*
-- 반환형에서의 const 선언과 const 객체

const Point operator++(int) 
{
	const Point retobj(xpos, ypos);
	xpos += 1;
	ypos += 1;
	return retobj;
}

후위증가와 후위감소 연산자를 오버로딩 한 함수들인데 
반환형이 const로 선언되어있다. 
이유는? 
"operator-- 함수의 반환으로 인해 생성되는 임시객체를 const 객체로 생성하겠다!" 
retobj 객체의 const 선언유무는 retobj 객체의 반환에 아무런 영향을 미치지 않음 

*/

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point& operator++() // 전위증가
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}

	const Point operator++(int) // 후위 증가
	{
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}

	friend Point& operator--(Point &ref);
	friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref) // 전위감소
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point &ref, int) // 후위감소 
{
	const Point retobj(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main()
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	cpy.ShowPosition();
}

