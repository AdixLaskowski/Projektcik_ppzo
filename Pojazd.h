#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using std::ofstream;
using std::string;
using namespace std;

class Pojazd
{
	string nr_rej, paliwo, marka, model, VIN;
	int poj_silnik, KW, przebieg, rocznik, ID;

	fstream baza;

public:
	
	void Wyswietl(int ID);
	void Dodaj();
	void Zapisz();


};

