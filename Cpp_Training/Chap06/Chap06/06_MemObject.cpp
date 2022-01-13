/*
-- 3장 클래스 재활용
3.1 포함(Containment) 
포함은 객체를 멤버로 선언하여 해당 클래스의 기능을 재활용 하는 기법 
클래스의 멤버는 타입에 제한이 없어 기본형뿐만 아니라 객체를 포함 가능 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Date
{
protected:
	int year, month, day;

public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutDate() { printf("%d/%d/%d", year, month, day); }
};

class Product
{
private:
	char name[64];
	char company[32];
	Date validto;
	int price;

public:
	Product(const char *aname, const char *acompany, int y, int m,
		int d, int aprice) : validto(y, m, d)
	{
		strcpy(name, aname);
		strcpy(company, acompany);
		price = aprice;
	}

	void OutProduct()
	{
		printf("이름:%s \n", name);
		printf("제조사:%s \n", company);
		printf("유효기간 : ");
		validto.OutDate();
		puts("");
		printf("가격:%d\n", price);
	}
};

int main()
{
	Product shrimp("새우깡", "농심", 2020, 8, 15, 900);
	shrimp.OutProduct();

}