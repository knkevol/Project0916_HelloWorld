#include <iostream>

using namespace std;

int main()
{
	int PlayerHP = 100;
	int Attack = 20;
	int CurrentHP = 0;

	CurrentHP = PlayerHP - Attack;
	
	int Heal = 50;

	int PlayerHeal = CurrentHP + Heal;


	cout << PlayerHeal;
	return 0;
}