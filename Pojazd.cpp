#include "Pojazd.h"

void Pojazd::Wyswietl(int ID)
{
	cout << this->marka << endl;
}

void Pojazd::Dodaj(int ID)
{
	this->ID = to_string(ID);

	cout << "Podaj Marke pojazdu: " << endl;
	cin >> this->marka;

	cout << "Podaj Model pojazdu: " << endl;
	cin >> this->model;

	cout << "Podaj numer rejestracyjny pojazdu: " << endl;
	cin >> this->nr_rej;

	cout << "Podaj rocznik pojazdu: " << endl;
	cin >> this->rocznik;

	cout << "Podaj pojemnosc silnika pojazdu: " << endl;
	cin >> this->poj_silnik;

	cout << "Podaj przebieg pojazdu: " << endl;
	cin >> this->poj_silnik;

	cout << "Podaj KW pojazdu: " << endl;
	cin >> this->KW;

	Zapisz();

	cout << endl << "ID twojego samochodu to: " << this->ID;
	cout << endl << endl;
	Sleep(1500);
	cout << "Dodawanie pojazdu do bazy zakonczone pomyslnie" << endl;
	Sleep(1000);

	system("cls");

}

void Pojazd::Zapisz()
{

	ofstream file_out;

	file_out.open("baza.txt", std::ios_base::app);
	file_out << this->ID + " " + this->marka + " " << this->model + " " << this->nr_rej + " " << this->rocznik + " " << this->poj_silnik + " " << this->KW;
	file_out << endl;
}

void Pojazd::DrawVehicle()
{
	cout << "                       ____________________" << endl;
	cout << "                     //|           |        \." << endl;
	cout << "                   //  |           |          \." << endl;
	cout << "      ___________//____|___________|__________()\__________________" << endl;
	cout << "    /__________________|_=_________|_=___________|_________________{}" << endl;
	cout << "    [           ______ |           | .           | ==  ______      { }" << endl;
	cout << "   _[__        /##  ##\|           |             |    /##  ##\    _{# }_" << endl;
	cout << " {_____)______|##    ##|___________|_____________|___|##    ##|__(______}" << endl;
	cout << "             /  ##__##                              /  ##__##        \." << endl;
	cout << endl;
}

