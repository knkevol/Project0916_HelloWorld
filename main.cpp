#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

//entry point
int main()
{
	int PlayerX = 0;
	int PlayerY = 0;
	bool bIsRunning = true;

	while (bIsRunning)
	{
		int KeyCode = _getch(); // 입력 받는 것을 출력
		if (KeyCode == 'w')
		{
			PlayerY--;
		}
		else if (KeyCode == 's')
		{
			PlayerY++;
		}
		else if (KeyCode == 'a')
		{
			PlayerX--;
		}
		else if (KeyCode == 'd')
		{
			PlayerX++;
		}
		else if (KeyCode == 'q')
		{
			bIsRunning = false;
		}
		system("cls");

		COORD Cur;
		Cur.X = PlayerX;
		Cur.Y = PlayerY;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

		cout << "P" << endl;
	}

	return 0;
}