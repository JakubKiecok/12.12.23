#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

class Osoba
{
public:
    string imie;
    string nazwisko;
    int wiek;
public:
    Osoba(string imie, string nazwisko, int wiek) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->wiek = wiek;
    }
};

int main()
{
    vector <Osoba> tablica;

    int ileOsob;

    cout << "Podaj ile osob dodac do wektora: "; cin >> ileOsob;

    for (size_t i = 0; i < ileOsob; i++)
    {
        string imie;
        string nazwisko;
        int wiek;
        cout << "nr " << i + 1 << " podaj imie = "; cin >> imie;
        cout << "nr " << i + 1 << " podaj nazwisko = "; cin >> nazwisko;
        cout << "nr " << i + 1 << " podaj wiek = "; cin >> wiek;

        tablica.push_back(Osoba(imie, nazwisko, wiek));
    }

    for (size_t i = 0; i < tablica.size(); i++)
    {
        cout << "Imie = " << tablica[i].imie << ", Nazwisko = " << tablica[i].nazwisko << ", Wiek = " << tablica[i].wiek << endl;
    }

    return EXIT_SUCCESS;
}