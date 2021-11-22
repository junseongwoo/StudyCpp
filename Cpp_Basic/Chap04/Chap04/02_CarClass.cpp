#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cursor.h>

class Car
{
private:
	int gear;
	int angle;
	int rpm;

public:
	Car() { gear = 0; angle = 0; rpm = 0; }
	void ChangeGear(int aGear) {
		if (aGear >= 0 && aGear <= 6) {
			gear = aGear;
		}
	}

	void RotateWhell(int Delta) {
		int tAngle = angle + Delta;
		if (tAngle >= -45 && tAngle <= 45) {
			angle = tAngle;
		}
	}

	void Accel() {
		rpm = max(rpm - 500, 0);
	}

	void Break() {
		rpm = max(rpm = 500, 0);
	}

	void Run() {
		int Speed;
		char Mes[128];
		gotoxy(10, 13);
		if (gear == 0) {
			puts("먼저 1 ~ 6 키를 눌러 기어를 넣으시오      ");
			return;
		}
		if (gear == 6) {
			Speed = rpm / 100;
		}
	}

};