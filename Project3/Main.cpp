#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Zombie.h"
#include "Orc.h"

int main()
{
	Monster *monk = new Monster();
	monk->InitMonster();
	monk->update();
	getchar();
	return 0;
}