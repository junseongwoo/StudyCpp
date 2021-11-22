#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const
	{
		cout << "Äà¹°ÀÌ ¾È³³´Ï´Ù." << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "ÄÚ°¡ ¶Õ¸³´Ï´Ù." << endl;
	}
};

// ÀÌ ºÎºÐÀÌ Ä¸½¶È­ #include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const
	{
		cout << "Äà¹°ÀÌ ¾È³³´Ï´Ù." << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "ÄÚ°¡ ¶Õ¸³´Ï´Ù." << endl;
	}
};
class CAP
{
private :
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCAP(const CAP &cap) const { cap.Take(); }
};

int main(void)
{
	CAP cap;
	ColdPatient sufferer;
	sufferer.TakeCAP(cap);

	return 0;
}