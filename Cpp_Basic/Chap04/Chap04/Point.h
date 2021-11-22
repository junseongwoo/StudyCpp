// 제한된 방법으로의 접근만 허용을 해서 잘몬된 값이 저장되지 않도록 도와야 하고 
// 또 실수를 했을 때, 실수가 쉽게 발견되도록 해야 한다.
#pragma once
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;
	int y;

public:
	// 
	Point(const int &xpos, const int &ypos);
	//bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif