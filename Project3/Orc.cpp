#include "Orc.h"



Orc::Orc()
{
}


Orc::~Orc()
{
}

int Orc::OAttack()
{
	return Monster::Attack() + 2000;
}