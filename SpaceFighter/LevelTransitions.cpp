
#include "Level.h"
#include "GameplayScreen.h"
#include "GameObject.h"
#include "BioEnemyShip.h"
#include "PlayerShip.h"
#include "Ship.h"


void SetLevel()
{
	Level* pLevel = new Level();
	GameObject::SetCurrentLevel(pLevel);
}

void PlayerDeath(const float damage)
{
	PlayerShip* pPlayerShip = new PlayerShip();
	pPlayerShip->Hit(damage);
	
}
void ShipsDestroyed()
{
	// check how many ships are destroyed
	if (EnemyShip::Hit)
	{
		if (EnemyShip::Hit == 1)
		{
			// Increment the number of ships destroyed
		}
		else
		{
			// Do not increment the number of ships destroyed
		}
	}
	else
	{
		// Do not increment the number of ships destroyed
	}

}

void TransitionToLevel()
{
	int HitCount = 10;
	// check how many ships are destroyed / hit
	if (ShipsDestroyed() == HitCount)
	{
		{
			// Transition to next level if a certain amount of ships are destroyed
		}
		// Transition to next level if a certain amount of ships are destroyed
	}
	else
	{

		// Do not transition to next level & instead restart level if player fails destroying enemy ships
	}

}