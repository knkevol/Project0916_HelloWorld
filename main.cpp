#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	// 방향이동
	int PlayerX = 0;
	int PlayerY = 0;
	char PlayerShape = '@';

	// 상태변수
	bool IsAlive = true;
	bool IsHungry = true;

	// 처리한다
	// Process
	PlayerX++;
	PlayerY++;

	// 엔진
	// Render(); | 1frame
	COORD Cur; 
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape << endl;
	_getch(); // 이전 위치 제거
	system("cls");

	PlayerX++; // input
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape << endl;
	_getch();
	system("cls");

	PlayerY++;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape << endl;
	_getch();
	system("cls");


	/*
	* GameLoop *
	while (true)
	{
	Input
	Process
	Render
	}
	*/

	return 0;
}