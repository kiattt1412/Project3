#include "Zombie.h"



Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

int Zombie::ZAttack()
{
	return Monster::Attack() + 200;
}