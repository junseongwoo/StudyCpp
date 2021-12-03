/*
-- 증가, 감소 연산자 오버로딩 
1 증가 연산자 : ++
1 감소 연산자 : -- 

ex) ++pos : 호출되는 함수의 이름은 ++연산자와 키워드 operator를 연결해서 완성되므로 
            operator++ 이다.

pos.operator++() == operator++(pos)
-> 전달할 인자가 없는 경우는 단항 연산자를 오버로딩 했기 때문
-> 하나 있는 피연산자의 멤버함수를 호출하는 형태이기 때문 

결론 
++pos - 멤버함수로 오버로딩 된 경우 : pos.operator++();
      - 전역함수로 오버로딩 된 경우 : operator++(pos);
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

	// 멤버함수 형태로 오버로딩
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;

		/*
		자기자신을 반환 = 여기서는 객체를 반환
		여기서는 참조형으로 반환된다. 따라서 호출결과로 객체 자신을 참조 할 수 있는 
		'참조 값'이 반환
		*/
		return *this; 
	}
	// 전역함수에 대해 friend 선언
	friend Point& operator--(Point &ref);
};

// 전역함수 형태로 오버로딩
Point& operator--(Point &ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

int main()
{
	Point pos(1, 2); 
	++pos; // pos.operator++(); -> 멤버함수 형태로 오버로딩 되었기 때문

	pos.ShowPosition();
	--pos; // operator--(pos); -> 전역함수 형태로 오버로딩 되었기 때문

	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();

}