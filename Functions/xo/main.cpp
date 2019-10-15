#include<iostream>
#include<conio.h>
using namespace std;
#define HORIZ_OFFSET "\t\t\t\t\t\t"
void PrintField(char Field[], const int n, char player);
void Move(char Field[], const int n, char player);

//my proverka
void proverka(char Field[], const int n)  //my proverka
{
	if (Field[0] != 0)
	{
		if (Field[0] == Field[1])
		{
			if (Field[1] == Field[2]) cout << "Win_____";
			return;
		}
	}
	if (Field[0] != 0)
	{
		if (Field[0] == Field[3])
		{
			if (Field[3] == Field[6]) cout << "Win_____";
			return;
		}
	}
	if (Field[0] != 0)
	{
		if (Field[0] == Field[4])
		{
			if (Field[4] == Field[8]) cout << "Win_____";
			return;
		}
	}
	if (Field[1] != 0)
	{
		if (Field[1] == Field[4])
		{
			if (Field[4] == Field[7]) cout << "Win_____";
			return;
		}
	}
	if (Field[2] != 0)
	{
		if (Field[2] == Field[5])
		{
			if (Field[5] == Field[8]) cout << "Win_____";
			return;
		}
	}
	if (Field[3] != 0)
	{
		if (Field[3] == Field[4])
		{
			if (Field[4] == Field[5]) cout << "Win_____";
			return;
		}
	}
	if (Field[6] != 0)
	{
		if (Field[6] == Field[7])
		{
			if (Field[7] == Field[8]) cout << "Win_____";
			return;
		}
	}
	if (Field[6] != 0)
	{
		if (Field[6] == Field[4])
		{
			if (Field[4] == Field[2]) cout << "Win_____";
			return;
		}
	}

} 
//teacher proverka
void check(char Field[], const int n, char player)
{
	bool game_over = false;
	if (Field[0] == Field[4] && Field[4] == Field[8] && Field[8] != 0) game_over = true;
	else if (Field[2] == Field[4] && Field[4] == Field[6] && Field[6] != 0) game_over = true;

	else if (Field[0] == Field[1] && Field[1] == Field[2] && Field[2] != 0) game_over = true;
	else if (Field[3] == Field[4] && Field[4] == Field[5] && Field[5] != 0) game_over = true;
	else if (Field[6] == Field[7] && Field[7] == Field[8] && Field[8] != 0) game_over = true;

	else if (Field[0] == Field[3] && Field[3] == Field[6] && Field[6] != 0) game_over = true;
	else if (Field[1] == Field[4] && Field[4] == Field[7] && Field[7] != 0) game_over = true;
	else if (Field[2] == Field[5] && Field[5] == Field[8] && Field[8] != 0) game_over = true;

	if (game_over)
	{
		cout << "Player _" << player << "_ wins" << endl;
		return;
	}
}
/////////////////////
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 9 + 1;
	char Field[SIZE] = {}; // Игровое поле 
	char player = '0';
	PrintField(Field, SIZE, player);

}
/////////////////
void PrintField(char Field[], const int n, char player)
{
	system("cls");
	cout << "\n\n\n\n\n";
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZ_OFFSET;
		for (int j = 0; j < 3; j++)
		{
			if (j == 0) cout << " ";
			cout << Field[i + j];
			if (j != 2) cout << " | ";
		}
		cout << endl;
		cout << HORIZ_OFFSET;
		if (i != 0) cout << "--- --- ---" << endl;
	}
 	check(Field, n, player);
	Move(Field, n, player);
}
	/*
void Move(char Field[], const int n, char Player)
{
	char key;
	bool busy;
	do {
		busy = false;
		key = _getch();
		if (key == 27) return;
		if (Field[key - 49] != 0)busy = true;
		else Field[key - 49] = Player;
		if(busy) cout << "Клетка занята";
	} while (Field[key - 49] != 0);
}
	*/

void Move(char Field[], const int n, char player)
{
	char key;
	key = _getch();
	if (key == 27) return;
	//cout << (int)key << endl;
	if (Field[key - 49] == 0)
	{
		if (player == 'X') player = '0';
		else player = 'X';
		Field[key - 49] = player;
	}
	else
	{	cout << "Здесь уже походили" << endl;
		system("pause");
	}
	PrintField(Field, n, player);

}