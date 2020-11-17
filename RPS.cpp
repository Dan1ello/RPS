#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
// 1 игрок
string fir = "1 игрок выбрал Камень\n";
string sec = "1 игрок выбрал Ножницы\n";
string thi = "1 игрок выбрал Бумагу\n";
string win = "1 игрок победил!";

// 2 игрок
string fi = "2 игрок выбрал Камень\n";
string se = "2 игрок выбрал Ножницы\n";
string th = "2 игрок выбрал Бумагу\n";
string SecWin = "2 игрок победил!";

// остальное
string answer = "Ваш ответ принят.\n";
string draw = "\x1b[33;1mНичья!\x1b[0m";

int a;
int b;

cout << "Камень-Ножницы-Бумага \x1b[32;1mv0.5alpha\x1b[0m\n\n";
cout << "1 игрок, напишите одно из чисел: 1 | 2 | 3: ";
cin >> a;
sleep(1);

switch (a) {
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
    cout << "Вы выбрали число 0 или число больше 3! Не надо так!";
    break;
}

// ========= ЧАСТЬ 2 ИГРОКА ===========

cout << "=======================\n2 игрок, напишите одно из чисел: 1 | 2 | 3: ";
cin >> b;
sleep(1);

switch (b) {
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
    cout << "Вы выбрали число 0 или число больше 3! Не надо так!\n\n";
    break;
}

// ========= ПОДСЧЕТЫ ==========

cout << "\n\x1b[33;1mИгра Завершена: \x1b[0m";
if (a == 1 || b == 1)
{cout << draw;}
}
