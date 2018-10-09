#include <iostream>
#include "Player.h";
#include "conio.h";

using namespace std;

int main()
{
	Player playerOne = Player();
	char input = ' ';
	bool hasDone = true;
	while (true)
	{
		if (hasDone) {
			cout << "Where are you going?\n";
			hasDone = false;
		}
		input = _getch();
		system("cls");
		cout << "Where are you going?\n";
		playerOne.move(input);
	}

	return 0;
}