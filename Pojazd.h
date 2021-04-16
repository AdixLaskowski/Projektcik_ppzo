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
	string nr_rej, paliwo, marka, model, VIN;
	string poj_silnik, KW, przebieg, rocznik, ID;


public:
	
	fstream file;
	string line;

	void Wyswietl(int ID);
	void Dodaj(int ID);
	void Zapisz();
	void Odczytaj();
	void Znajdz();
	void ChceckID();


};

