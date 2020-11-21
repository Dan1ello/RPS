#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

// 1 игрок
	string pickr = "Вы выбрали \x1b[96;1mКамень.\x1b[0m\n";
	string picks = "Вы выбрали \x1b[36;1mНожницы.\x1b[0m\n";
	string pickp = "Вы выбрали \x1b[36;1mБумагу.\x1b[0m\n";
	string win = "\x1b[33;1m1 игрок победил!\x1b[0m";
	string fstart = "=========1 ИГРОК==========\nВыберите свое оружие - \x1b[36;1m[1]\x1b[0mКамень | \x1b[36;1m[2]\x1b[0mНожницы | \x1b[36;1m[3]\x1b[0mБумага: ";

	// 2 игрок
	string spickr = "Компьютер выбрал \x1b[96;1mКамень!\x1b[0m\n";
	string spicks = "Компьютер выбрал \x1b[36;1mНожницы!\x1b[0m\n";
	string spickp = "Компьютер выбрал... \x1b[36;1mБумагу!\x1b[0m\n";
	string SecWin = "\x1b[33;1mИИ победил!\x1b[0m";
	string sstart = "=========2 ИГРОК==========\nВыберите свое оружие - \x1b[36;1m[1]\x1b[0mКамень | \x1b[36;1m[2]\x1b[0mНожницы | \x1b[36;1m[3]\x1b[0mБумага: ";

	// остальное
	string answer = "Ваш ответ принят.\n";
	string draw = "\x1b[33;1mНичья!\x1b[0m";
	string errorEnd = "\x1b[33;1mВ ходе игры была допущена ошибка.\x1b[0m";
	string error = "Ошибка... Зачем ты это сделал?\n";
	string start = "Камень-Ножницы-Бумага \x1b[32;1mv1.1beta\x1b[0m\n\n";
	string result = "\n\x1b[33;1mИгра Завершена: \x1b[0m";

	// вводимые данные
	int a;
	int b;
	int c;
	int ai;

void end()
{
	// ========= РЕЗУЛЬТАТЫ ==========
	cout << result;
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

void endAi()
{
	// ========= РЕЗУЛЬТАТЫ ==========
	srand(time(0));
	int ai = (rand()%3+1);
	cout << result;
	if (a == 1 && ai == 1)
	{
		cout << draw;
	}
	else if (a == 1 && ai == 2)
	{
		cout << win;
	}
	else if (a == 1 && ai == 3)
	{
		cout << SecWin;
	}
	else if (a == 2 && ai == 1)
	{
		cout << SecWin;
	}
	else if (a == 2 && ai == 2)
	{
		cout << draw;
	}
	else if (a == 2 && ai == 3)
	{
		cout << win;
	}
	else if (a == 3 && ai == 1)
	{
		cout << win;
	}
	else if (a == 3 && ai == 2)
	{
		cout << SecWin;
	}
	else if (a == 3 && ai == 3)
	{
		cout << draw;
	}
	else
	{
		cout << errorEnd;
	}
	cout << ai;
	cout << a;
}

void mode()
{
		// ============ НАЧАЛО ==========
	cout << start;
	cout << fstart;
	cin >> a;
	sleep(1);

	switch (a)
	{
	case 1:
		cout << answer;
		break;

	case 2:
		cout << answer;
		break;

	case 3:
		cout << answer;
		break;

	default:
		cout << error;
		break;
	}

	// ====== ЧАСТЬ 2 ИГРОКА ======

	cout << sstart;
	cin >> b;
	sleep(1);

	switch (b)
	{
	case 1:
		cout << answer;
		break;

	case 2:
		cout << answer;
		break;

	case 3:
		cout << answer;
		break;

	default:
		cout << error;
		break;
	}
}

void modeAI()
{
	cout << start;
	cout << fstart;
	cin >> a;
	sleep(1);

	switch (a)
	{
	case 1:
		cout << answer;
		break;

	case 2:
		cout << answer;
		break;

	case 3:
		cout << answer;
		break;

	default:
		cout << error;
		break;
	}
}

void modeEn()
{
}

void modeEnAI()
{
}

int main()
{
cout << "==========ВЫБЕРИТЕ РЕЖИМ============\n";
cout << "1)Стандартный (Человек vs Человек)\n";
cout << "2)Против ИИ";
cout << "\n==========CHOOSE GAMEMODE===========\n";
cout << "3)Default (Person vs Person)\n";
cout << "4)vs AI\n====================================\n5)Quit/Выйти\n\n >> ";

cin >> c;
switch (c)
{
	case 1:
	mode();
	end();
	break;
	
	case 2:
	modeAI();
	endAi();
	break;
	
	case 3:
	modeEn();
	end();
	break;
	
	case 4:
	modeEnAI();
	endAi();
	break;
	
	case 5:
	cout << "Скоро увидимся ;)";
	break;
	
	default:
	cout << "На ваш аккаунт Brawl Stars зачислено 9999 гемов.";
	break;
}
}
