#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <cstdlib>

using std::ofstream;
using std::string;
using namespace std;

class Pojazd
{
	//Dane pojazdów

	string nr_rej, marka, model, poj_silnik, KW, przebieg, rocznik, ID;

public:
	
	fstream file;
	string line;

	//Metody dot. pojazdów

	void Wyswietl(int ID);
	void Dodaj(int ID);
	void Zapisz();
	void Odczytaj();
	void Znajdz();

};

