#pragma once
class Player
{
public:
	Player();

	int theAttack();
	void move(char);
	void rest();

private:
	int _health;
	int _attack;
	int _defence;
	int _level;
	int _exp;

};

