#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	// �����̵�
	int PlayerX = 0;
	int PlayerY = 0;
	char PlayerShape = '@';

	// ���º���
	bool IsAlive = true;
	bool IsHungry = true;

	// ó���Ѵ�
	// Process
	PlayerX++;
	PlayerY++;

	// ����
	// Render(); | 1frame
	COORD Cur; 
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape << endl;
	_getch(); // ���� ��ġ ����
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