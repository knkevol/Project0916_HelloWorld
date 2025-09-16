#include <iostream>

using namespace std;

int main()
{
	int PlayerHP = 100;
	int Attack = 20;
	int CurrentHP = 0;

	int PlayerAttack = PlayerHP - Attack;
	
	CurrentHP = PlayerAttack;
	
	int Heal = 50;
	int PlayerHeal = CurrentHP + Heal;

	CurrentHP = PlayerHeal;

	cout << CurrentHP;
	return 0;
}