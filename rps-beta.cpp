#include <iostream>
#include <unistd.h>
using namespace std;

void test()
{}

void SecTest()
{}

void results()
{}

void gamemode()
{}

void SecGamemode()
{}

int main()
{
	// 1 игрок
	string fir = "1 игрок выбрал \x1b[96;1mКамень.\x1b[0m\n";
	string sec = "1 игрок выбрал \x1b[36;1mНожницы.\x1b[0m\n";
	string thi = "1 игрок выбрал \x1b[36;1mБумагу.\x1b[0m\n";
	string win = "\x1b[33;1m1 игрок победил\x1b[0m";

	// 2 игрок
	string fi = "2 игрок выбрал \x1b[96;1mКамень.\x1b[0m\n";
	string se = "2 игрок выбрал \x1b[36;1mНожницы.\x1b[0m\n";
	string th = "2 игрок выбрал \x1b[36;1mБумагу.\x1b[0m\n";
	string SecWin = "\x1b[33;1m2 игрок победил!\x1b[0m";

	// остальное
	string answer = "Ваш ответ принят.\n";
	string draw = "\x1b[33;1mНичья!\x1b[0m";
	string errorEnd = "\x1b[33;1mВ ходе игры была допущена ошибка.\x1b[0m";
	string error = "Ошибка... Зачем ты это сделал?\n";

	// вводимые данные
	int a;
	int b;

	// ============ НАЧАЛО =============
	cout << "Камень-Ножницы-Бумага \x1b[32;1mv1.1beta\x1b[0m\n\n";
	cout << "=========1 ИГРОК==========\nВыберите свое оружие - \x1b[36;1m[1]\x1b[0m\Камень | \x1b[36;1m[2]\x1b[0m\Ножницы | \x1b[36;1m[3]\x1b[0m\Бумага: ";
	cin >> a;
	sleep(1);

	switch (a)
	{
	case 1:
		cout << fir;
		break;

	case 2:
		cout << sec;
		break;

	case 3:
		cout << thi;
		break;

	default:
		cout << error;
		break;
	}

	// ====== ЧАСТЬ 2 ИГРОКА ======

	cout << "=========2 ИГРОК==========\nВыберите свое оружие - \x1b[36;1m[1]\x1b[0m\Камень | \x1b[36;1m[2]\x1b[0m\Ножницы | \x1b[36;1m[3]\x1b[0m\Бумага: ";
	cin >> b;
	sleep(1);

	switch (b)
	{
	case 1:
		cout << fi;
		break;

	case 2:
		cout << se;
		break;

	case 3:
		cout << th;
		break;

	default:
		cout << error;
		break;
	}

	// ========= РЕЗУЛЬТАТЫ ==========

	cout << "\n\x1b[33;1mИгра Завершена: \x1b[0m";
	if (a == 1 && b == 1)
	{
		cout << draw;
	}
	else if (a == 1 && b == 2)
	{
		cout << win;
	}
	else if (a == 1 && b == 3)
	{
		cout << SecWin;
	}
	else if (a == 2 && b == 1)
	{
		cout << SecWin;
	}
	else if (a == 2 && b == 2)
	{
		cout << draw;
	}
	else if (a == 2 && b == 3)
	{
		cout << win;
	}
	else if (a == 3 && b == 1)
	{
		cout << win;
	}
	else if (a == 3 && b == 2)
	{
		cout << SecWin;
	}
	else if (a == 3 && b == 3)
	{
		cout << draw;
	}
	else
	{
		cout << errorEnd;
	}
}
