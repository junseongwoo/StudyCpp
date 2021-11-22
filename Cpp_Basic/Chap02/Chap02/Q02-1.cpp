#include <iostream>
using namespace std;

void Add_One(int &ref)
{
	ref = ref + 1;
}

void Change_sign(int &ref)
{
	ref = -ref;
}

int main(void)
{
	int val = 10;

	Add_One(val);
	cout << "val : " << val << endl;

	Change_sign(val);
	cout << "val : " << val << endl;
	
	return 0;
}