#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
string fir = " Вы выбрали Камень\n";
string sec = "Вы выбрали Ножницы\n";
string thi = "Вы выбрали Бумага\n";

string fi = "2 игрок выбрал Камень\n";
string se = "2 игрок выбрал Ножницы\n";
string th = "2 игрок выбрал Бумага\n";

string error1 = "Ошибка! Вы ввели неправильное число!\n\n";
string error = "Произошла непредвиденная ошибка! Скорей всего, вы написали 0 или число больше 3!\n";
string answer = "Ваш ответ принят.\n";

int e = 1;
int f = 2;
int d = 3;
int g;

cout << "Камень-Ножницы-Бумага \x1b[32;1mv0.4alpha\x1b[0m\n\n";
cout << "1 игрок, напишите одно из чисел: 1 | 2 | 3: ";
cin >> g;
sleep(1);

// Если игрок напишет 1, то будет камень
if (e == g) 
{cout << answer;}

// Если игрок напишет 2, то ножницы
if (f == g) 
{cout << sec;}

// Если игрок напишет 3, то бумага
if (d == g)
{cout << thi;}

// Если игрок напишет какую-ту отсебятину, то он выведет ошибку
if (g >= 4)
{cout << error;}

// Ошибка 0
if (g == 0)
{cout << error;}

// ========= ЧАСТЬ 2 ИГРОКА =============

cout << "=======================\n2 игрок, напишите одно из чисел: 1 | 2 | 3: ";
cin >> g;
sleep(1);

// Если 2 игрок напишет 1, то будет камень
if (e == g) 
{cout << fi;}

// Если 2 игрок напишет 2, то ножницы
if (f == g) 
{cout << se;}

// Если 2 игрок напишет 3, то бумага
if (d == g)
{cout << th;}

// Если игрок напишет какую-ту отсебятину, то он выведет ошибку
if (g >= 4)
{cout << error;}

// Ошибка 0
if (g == 0)
{cout << error;}

cout << "\n\n\x1b[33;1mИгра Завершена.\x1b[0m";
return 0;
}