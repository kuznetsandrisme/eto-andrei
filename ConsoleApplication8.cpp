// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int pos = 0;
	string name1 = "Федор ";
	string surname1 = "Воробьев";
	int age1 = 10;
	string name2 = "Алиса ";
	string surname2 = "Балашова";
	int age2 = 10;
	string name3 = "Максим ";
	string surname3 = "Кузнецов";
	int age3 = 14;
	string name4 = "Юрий ";
	string surname4 = "Штоль";
	int age4 = 12;
	string name5 = "Полина ";
	string surname5 = "Машталер";
	int age5 = 10;
	string name6 = "Андрей ";
	string surname6 = "Кузнецов";
	int age6 = 12;
	string name7 = "Лидия ";
	string surname7 = "Гопка";
	int age7 = 15;
	string name8 = "Александр ";
	string surname8 = "Крючков";
	int age8 = 11;


	//system("cls"); //Очистка консоли
	cout << "ЦТД Строгино" << endl;
	cout << "Выберите учащегося: " << endl;
	cout << "1)" << name1 << surname1 << endl;
	cout << "2)" << name2 << surname2 << endl;
	cout << "3)" << name3 << surname3 << endl;
	cout << "4)" << name4 << surname4 << endl;
	cout << "5)" << name5 << surname5 << endl;
	cout << "6)" << name6 << surname6 << endl;
	cout << "7)" << name7 << surname7 << endl;
	cout << "8)" << name8 << surname8 << endl;
	cin >> pos; // Выбор номера направления
	if (pos == 1) {
		int position_student = 0;
		system("cls");
		cout << "Возраст: " << age1 << endl;
		cout << "Информация:\nДата рождения: 01.10.2008г.\nИнтересы: электроника и программирование.\n";
		cout << "Возраст: " << age6 << endl;
		cout << ":\nДата рождения: 16.11.2005г.\nИнтересы: Играть в футбол, компьютерные игры, программирование\n";
		cin >> pos_student;
		if (pos_student == 1) {
			system("cls");
			cout << "Преподаваьель: Смбатян Азнив." << endl;
			cout << "Список направлений: " << endl;
			cout << "1) C++" << endl;
			cout << "2) С#" << endl;
				if (pos_student > 8)
				{
					cout << "Выберите другой номер: ";
					cin >> pos_student;

			}
		}


	}
	return 0;
}

