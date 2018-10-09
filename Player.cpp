#include "Player.h"
#include <iostream>

using namespace std;


Player::Player()
{
	_health = 100;
	_attack = 10;
	_defence = 2;
	_level = 0;
	_exp = 0;
}

int Player::theAttack()
{
	cout << "Attacking\n";
	return (_attack / 2);
}

void Player::move(char direction)
{
	if (direction == 'w') {
		cout << "Up\n";
	}
	if (direction == 's') {
		cout << "Down\n";
	}
	if (direction == 'a') {
		cout << "Left\n";
	}
	if (direction == 'd') {
		cout << "Right\n";
	}
}

void Player::rest()
{
	_health = 100;
	cout << "Resting . . .\n";
}
