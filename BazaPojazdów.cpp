// BazaPojazdów.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>
#include "Pojazd.h"
#include "Motor.h"

using namespace std;

void Odczytaj()
{
    string line;
    ifstream myfile("baza.txt");

    if (myfile.peek() == ifstream::traits_type::eof())
    {
        cout << endl;
        cout << "Baza jest pusta" << endl;
        cout << endl;
    }

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
            cout << endl;
        }
        myfile.close();
    }
}

int main()
{
    char wybor='0';

    int licznik=0;

    while ( wybor != 5)
    {

        //Menu

        cout << "1. Dodaj pojazd" << endl;
        cout << "2. Lista zarejestrowanych pojazdow" << endl;
        cout << "3.Wyjdz z programu" << endl;


        //Wczytywanie wyboru opcji

        cin >> wybor;
        system("cls");


        //Określanie ID kolejnego pojazdu po liczbie linii w pliku tekstowym z bazą danych

        ifstream myfile("baza.txt");
        int ID = 0;
        string line;

        while (std::getline(myfile, line))
            ++ID;
        

        //Obsługa menu

        switch (wybor)
        {
            //Dodawanie nowego pojazdu do bazy
        case '1':
            int typ;
            cout << "Dodawanie pojazdu: " << endl;
            cout << "Jaki typ pojazdu chcesz dodac? 1-Pojazd zwykly  2-Motor" << endl;
            cin >> typ;


            if (typ == 1)
            {
                Pojazd p1; //Tworzenie obiektu nowego pojazdu
                p1.DrawVehicle();
                p1.Dodaj(ID);
            }
            
            else
                if (typ == 2) {
                    Motor m1; //Tworzenie obiektu nowego motora
                    cout << "Dodawanie pojazdu typu motor" << endl;
                    m1.Draw();
                    m1.Dodaj(ID);
                    
                    
                }
                else cout << "Zla opcja" << endl;

            
            break;

            //Wyświetlenie listy pojazdów
        case '2':
            cout << endl;
            cout << "Lista pojazdow: "<< endl;
            cout << endl;
            Odczytaj();
            break;


            //Wyjście z programu
        case '3':
            cout << "Do widzenia " << endl;
            exit(0);
            break;

            //Jeżeli podane opcja nie pasuje do opcji menu
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
