#include <iostream>

using namespace std;

int main()
{
	int PlayerHP = 100;
	int Attack = 20;
	int CurrentHP = 0;

	CurrentHP = PlayerHP - Attack;
	
	int Heal = CurrentHP + 50;

	CurrentHP = Heal;

	cout << CurrentHP;
	return 0;
}