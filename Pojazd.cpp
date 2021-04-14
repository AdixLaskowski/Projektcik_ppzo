#include "Pojazd.h"

void Pojazd::Wyswietl(int ID)
{
	cout << this->marka << endl;
}

void Pojazd::Dodaj()
{
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

	cout << "Podaj KW pojazdu: " << endl;
	cin>>this->KW;

	Zapisz();

	cout << "Dodawanie pojazdu do bazy zakonczone pomyslnie" << endl;
	Sleep(1000);

	system("cls");

	

}

void Pojazd::Zapisz()
{

	string filename("iksde.txt");
	ofstream file_out;

	file_out.open(filename, std::ios_base::app);
	file_out << this->marka+", "+this->model+", "+this->nr_rej+", " << this->rocznik+", "+this->paliwo+", "<<this->poj_silnik;
}