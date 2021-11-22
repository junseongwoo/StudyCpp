// 레퍼런스 멤버

#include <stdio.h>

class Some
{
public:
	int &total;
	Some(int &atotal) : total(atotal) {}
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	int value = 8;
	Some S(value);
	S.OutTotal();
}