/*
-- 객체가 생성되면 멤버변수는 객체 내에 존재하지만, 
멤버함수는 메모리의 한 공간에 별도로 위치하고선, 
이 함수가 정의된 클래스의 모든 객체가 이를 공유하는 형태를 취한다.
*/

#include <iostream>

// class data를 흉내낸 영역
typedef struct Data
{
	int data;
	void(*ShowData) (Data*);
	void(*Add)(Data*, int);
}; Data;

void ShowData(Data *THIS) { std::cout << "Data: " << THIS->data << std::endl; }
void Add(Data * THIS, int num) { THIS->data += num; }

// 적절히 변경된 main 함수
int main()
{
	Data obj1 = { 15, ShowData, Add };
	Data obj2 = { 7, ShowData, Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);
}