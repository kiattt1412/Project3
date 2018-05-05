#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Monster.h"
#include "Orc.h"
#include "Zombie.h"
#include "math.h"
#include "Player.h"
//#include <random>


using namespace std;

Monster::Monster()
{
}


Monster::~Monster()
{
}



int Monster::Attack()
{
	return rand()%500;
}

int Monster::InitMonster()
{
	srand(time(NULL));
	
	for (int i = 0; i < 100; i++)
	{
		monstock[i] = rand() % 2;
		
	}
	/*for (int i = 0; i < 100; i++)
	{
		if (monstock[i] == 0)
		{
			std::cout << "Orc ";
		}
		else if (monstock[i] == 1)
		{
			std::cout << "Zom ";
		}

	}*/

	return 0;

}

void Monster::update()
{
	Orc *o = new Orc();
	Zombie *z = new Zombie();
	for (int i = 0; i < 100; i++)
	{
		if (monstock[i] == 0)
		{
			std::cout << "Player attacked by Orc " << o->OAttack() << " Damage " << endl;
			
			
		}
		else if (monstock[i] == 1)
		{
			std::cout << "Player attacked by Zombie " << z->ZAttack() << " Damage " << endl;
		}
	}
}