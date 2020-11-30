#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;
// github.com/dan1ello/rps
// 1 игрок
string pickr = "Вы выбрали \x1b[96;1mКамень.\x1b[0m\n";
string picks = "Вы выбрали \x1b[36;1mНожницы.\x1b[0m\n";
string pickp = "Вы выбрали \x1b[36;1mБумагу.\x1b[0m\n";
string win = "\x1b[33;1m1 игрок победил!\x1b[0m";
string AIWin = "\x1b[33;1mИгрок победил!\x1b[0m";
string fstart = "=========1 ИГРОК==========\nВыберите свое оружие - \x1b[36;1m[1]\x1b[0mКамень | \x1b[36;1m[2]\x1b[0mНожницы | \x1b[36;1m[3]\x1b[0mБумага: ";

// 2 игрок
string SecWin = "\x1b[33;1m2 игрок победил!\x1b[0m";
string AISecWin = "\x1b[33;1mИИ победил!\x1b[0m";
string sstart = "=========2 ИГРОК==========\nВыберите свое оружие - \x1b[36;1m[1]\x1b[0mКамень | \x1b[36;1m[2]\x1b[0mНожницы | \x1b[36;1m[3]\x1b[0mБумага: ";

// остальное
string answer = "Ваш ответ принят.\n\n";
string draw = "\x1b[33;1mНичья!\x1b[0m";
string errorEnd = "\x1b[33;1mВ ходе игры была допущена ошибка.\x1b[0m";
string error = "Ошибка! Вы должны были выбрать одну из цифр!\n";
string start = "Камень-Ножницы-Бумага";
string result = "\n\x1b[33;1mИгра Завершена: \x1b[0m";
string rockvs = " (\x1b[34;1mКамень vs \x1b[0m";
string papervs = " (\x1b[34;1mБумага vs \x1b[0m";
string scissorsvs = " (\x1b[34;1mНожницы vs \x1b[0m";
string rock = "\x1b[34;1mКамень\x1b[0m)";
string paper = "\x1b[34;1mБумага\x1b[0m)";
string scissors = "\x1b[34;1mНожницы\x1b[0m)";
// ===============================
// 1 player
string ENpickr = "You chose \x1b[96;1mRock.\x1b[0m\n";
string ENpicks = "You chose \x1b[36;1mScissors.\x1b[0m\n";
string ENpickp = "You chose \x1b[36;1mPaper.\x1b[0m\n";
string ENwin = "\x1b[33;1m1 player win!\x1b[0m";
string ENAIWin = "\x1b[33;1mPlayer win!\x1b[0m";
string ENfstart = "=========1 PLAYER==========\nChoose your weapon - \x1b[36;1m[1]\x1b[0mRock | \x1b[36;1m[2]\x1b[0mScissors | \x1b[36;1m[3]\x1b[0mPaper ";

// 2 player
string ENSecWin = "\x1b[33;1m2 player win!\x1b[0m";
string ENAISecWin = "\x1b[33;1mAI Win!\x1b[0m";
string ENsstart = "=========2 PLAYER==========\nChoose your weapon - \x1b[36;1m[1]\x1b[0mRock | \x1b[36;1m[2]\x1b[0mScissors | \x1b[36;1m[3]\x1b[0mPaper ";

// other
string ENanswer = "Your answer has been accepted.\n\n";
string ENdraw = "\x1b[33;1mDraw!\x1b[0m";
string ENerrorEnd = "\x1b[33;1mAn error was made during the game.\x1b[0m";
string ENerror = "Error! You had to choose one of the numbers!\n";
string ENstart = "Rock-Paper-Scissors";
string ENresult = "\n\x1b[33;1mGame over: \x1b[0m";
string ENrockvs = " (\x1b[34;1mRock vs \x1b[0m";
string ENpapervs = " (\x1b[34;1mPaper vs \x1b[0m";
string ENscissorsvs = " (\x1b[34;1mScissors vs \x1b[0m";
string ENrock = "\x1b[34;1mRock\x1b[0m)";
string ENpaper = "\x1b[34;1mPaper\x1b[0m)";
string ENscissors = "\x1b[34;1mScissors\x1b[0m)";

// вводимые данные
int a, b, c, ai;

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
	switch (a)
	{
	case 1:
		cout << rockvs;
		break;

	case 2:
		cout << scissorsvs;
		break;

	case 3:
		cout << papervs;
		break;
	}
	switch (b)
	{
	case 1:
		cout << rock;
		break;

	case 2:
		cout << scissors;
		break;

	case 3:
		cout << paper;
		break;
	}
}

void endEn()
{
	// ========= RESULTS ==========
	cout << ENresult;
	if (a == 1 && b == 1)
	{
		cout << ENdraw;
	}
	else if (a == 1 && b == 2)
	{
		cout << ENwin;
	}
	else if (a == 1 && b == 3)
	{
		cout << ENSecWin;
	}
	else if (a == 2 && b == 1)
	{
		cout << ENSecWin;
	}
	else if (a == 2 && b == 2)
	{
		cout << ENdraw;
	}
	else if (a == 2 && b == 3)
	{
		cout << ENwin;
	}
	else if (a == 3 && b == 1)
	{
		cout << ENwin;
	}
	else if (a == 3 && b == 2)
	{
		cout << ENSecWin;
	}
	else if (a == 3 && b == 3)
	{
		cout << ENdraw;
	}
	else
	{
		cout << ENerrorEnd;
	}
	switch (a)
	{
	case 1:
		cout << ENrockvs;
		break;

	case 2:
		cout << ENscissorsvs;
		break;

	case 3:
		cout << ENpapervs;
		break;
	}
	switch (b)
	{
	case 1:
		cout << ENrock;
		break;

	case 2:
		cout << ENscissors;
		break;

	case 3:
		cout << ENpaper;
		break;
	}
}

void endAi()
{
	// ========= РЕЗУЛЬТАТЫ ==========
	srand(time(0));
	int ai = (rand() % 3 + 1);
	cout << result;
	if (a == 1 && ai == 1)
	{
		cout << draw;
	}
	else if (a == 1 && ai == 2)
	{
		cout << AIWin;
	}
	else if (a == 1 && ai == 3)
	{
		cout << AISecWin;
	}
	else if (a == 2 && ai == 1)
	{
		cout << AISecWin;
	}
	else if (a == 2 && ai == 2)
	{
		cout << draw;
	}
	else if (a == 2 && ai == 3)
	{
		cout << AIWin;
	}
	else if (a == 3 && ai == 1)
	{
		cout << AIWin;
	}
	else if (a == 3 && ai == 2)
	{
		cout << AISecWin;
	}
	else if (a == 3 && ai == 3)
	{
		cout << draw;
	}
	else
	{
		cout << errorEnd;
	}
	switch (a)
	{
	case 1:
		cout << rockvs;
		break;

	case 2:
		cout << scissorsvs;
		break;

	case 3:
		cout << papervs;
		break;
	}
	switch (ai)
	{
	case 1:
		cout << rock;
		break;

	case 2:
		cout << scissors;
		break;

	case 3:
		cout << paper;
		break;
	}
}

void endAiEN()
{
	// ========= RESULTS ==========
	srand(time(0));
	int ai = (rand() % 3 + 1);
	cout << result;
	if (a == 1 && ai == 1)
	{
		cout << ENdraw;
	}
	else if (a == 1 && ai == 2)
	{
		cout << ENAIWin;
	}
	else if (a == 1 && ai == 3)
	{
		cout << ENAISecWin;
	}
	else if (a == 2 && ai == 1)
	{
		cout << ENAISecWin;
	}
	else if (a == 2 && ai == 2)
	{
		cout << ENdraw;
	}
	else if (a == 2 && ai == 3)
	{
		cout << ENAIWin;
	}
	else if (a == 3 && ai == 1)
	{
		cout << ENAIWin;
	}
	else if (a == 3 && ai == 2)
	{
		cout << ENAISecWin;
	}
	else if (a == 3 && ai == 3)
	{
		cout << ENdraw;
	}
	else
	{
		cout << ENerrorEnd;
	}
	switch (a)
	{
	case 1:
		cout << ENrockvs;
		break;

	case 2:
		cout << ENscissorsvs;
		break;

	case 3:
		cout << ENpapervs;
		break;
	}
	switch (ai)
	{
	case 1:
		cout << ENrock;
		break;

	case 2:
		cout << ENscissors;
		break;

	case 3:
		cout << ENpaper;
		break;
	}
}

void numbers()
{
	cout << "Камень," << endl;
	sleep(1);
	cout << "Ножницы," << endl;
	sleep(1);
	cout << "Бумага:" << endl;
	sleep(1);
	cout << "1..." << endl;
	sleep(1);
	cout << "2... " << endl;
	sleep(2);
	cout << "3!\n";
}

void numbersEN()
{
	cout << "Rock," << endl;
	sleep(1);
	cout << "Scissors," << endl;
	sleep(1);
	cout << "Paper:" << endl;
	sleep(1);
	cout << "1..." << endl;
	sleep(1);
	cout << "2... " << endl;
	sleep(2);
	cout << "3!\n";
}

void mode()
{
	// ============ 1 ИГРОК ==========
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
		exit(0);
		break;
	}
	sleep(2);
	system("cls");

	// ====== 2 ИГРОК ======

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
		exit(0);
		break;
	}
	sleep(2);
	system("cls");
}

void modeAI()
{
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
		exit(0);
		break;
	}
}

void modeEn()
{
	// =========== 1 PLAYER ==========

	cout << ENfstart;
	cin >> a;
	sleep(1);

	switch (a)
	{
	case 1:
		cout << ENanswer;
		break;

	case 2:
		cout << ENanswer;
		break;

	case 3:
		cout << ENanswer;
		break;

	default:
		cout << ENerror;
		exit(0);
		break;
	}
	sleep(2);
	system("cls");

	// ====== 2 PLAYER ======

	cout << ENsstart;
	cin >> b;
	sleep(1);

	switch (b)
	{
	case 1:
		cout << ENanswer;
		break;

	case 2:
		cout << ENanswer;
		break;

	case 3:
		cout << ENanswer;
		break;

	default:
		cout << ENerror;
		break;
	}
	sleep(2);
	system("cls");
}

void modeEnAI()
{
	cout << ENfstart;
	cin >> a;
	sleep(1);

	switch (a)
	{
	case 1:
		cout << ENanswer;
		break;

	case 2:
		cout << ENanswer;
		break;

	case 3:
		cout << ENanswer;
		break;

	default:
		cout << ENerror;
		exit(0);
		break;
	}
}

int main()
{
	cout << start << endl
		 << ENstart << endl
		 << "--------\n\x1b[32;1mv1.2\x1b[0m" << endl;
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
		system("cls");
		mode();
		numbers();
		end();
		break;

	case 2:
		system("cls");
		modeAI();
		numbers();
		endAi();
		break;

	case 3:
		system("cls");
		modeEn();
		numbersEN();
		endEn();
		break;

	case 4:
		system("cls");
		modeEnAI();
		numbersEN();
		endAiEN();
		break;

	case 5:
		system("cls");
		cout << "Скоро увидимся/See you later!";
		break;

	default:
		exit(0);
		break;
	}
}
