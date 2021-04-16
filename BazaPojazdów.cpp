﻿// BazaPojazdów.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Pojazd.h"

using namespace std;

int main()
{
    char wybor='0';
    int ID = 0;

    while ( wybor != 5)
    {

        //Menu

        cout << "1. Dodaj pojazd" << endl;
        cout << "2. Lista zarejestrowanych pojazdow" << endl;
        cout << "3. Usun pojazd" << endl;
        cout << "4. Znajdz pojazd" << endl;
        cout << "5.Wyjdz z programu" << endl;

        //Wczytywanie wyboru opcji

        cin >> wybor;
        system("cls");

        ifstream myfile("baza.txt");

        if (myfile.peek() == ifstream::traits_type::eof())
        {
            ID = 0;
        }


        string nr_rej;
        Pojazd p1;      


        switch (wybor)
        {

        case '1':
            //system("cls");
            cout << "Dodawanie pojazdu: " << endl;
            p1.Dodaj(ID);
            ID++;
            break;

        case '2':
            //system("cls");
            cout << endl;
            cout << "Lista pojazdow: "<< endl;
            cout << endl;
            p1.Odczytaj();
            break;

        case '3':
            //system("cls");
            cout << "Usuwanie pojazdu" << endl;
            break;

        case '4':
            //system("cls");
            cout << "Znajdywanie poazdu" << endl;

            cout << "Podaj numer rejestracyjny pojazdu: " << endl;
            cin >> nr_rej;
            break;


        case '5':
            //system("cls");
            cout << "Do widzenia " << endl;
            exit(0);
            break;

        default:
            cout << "Error " + wybor << endl;
            break;
        }
        
    }

    

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
