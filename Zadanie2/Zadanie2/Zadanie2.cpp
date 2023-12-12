#include <iostream>
#include <vector>
#include <string>

using namespace std;

class lista_zakopow
{
public:
    string nabial;
    string pieczywo;
    string warzywa;
    int cena_nabialu;
    int cena_pieczywa;
    int cena_warzyw;
public:
    lista_zakopow(string nabial, string pieczywo, string warzywa, int cena_nabialu, int cena_pieczywa, int cena_warzyw ) {
        this->nabial = nabial;
        this->pieczywo = pieczywo;
        this->warzywa = warzywa;
        this->cena_nabialu = cena_nabialu;
        this->cena_pieczywa = cena_pieczywa;
        this->cena_warzyw = cena_warzyw;
    }
};

int main()
{
    vector <lista_zakopow> tablica;

    int ilosc_zakopow;
    int suma;

    cout << "Podaj ilosc zakopow = "; cin >> ilosc_zakopow;

    for (size_t i = 0; i < ilosc_zakopow; i++)
    {
        string nabial;
        string pieczywo;
        string warzywa;
        int cena_nabialu;
        int cena_pieczywa;
        int cena_warzyw;
        cout << "Zakupy " << i + 1 << endl << " Nabial: "; cin >> nabial; cout << " cena za " << nabial << " : "; cin >> cena_nabialu;
        cout << " Pieczywo: "; cin >> pieczywo; cout << " cena za " << pieczywo << " : "; cin >> cena_pieczywa;
        cout << " Warzywa: "; cin >> warzywa; cout << " cena za " << warzywa << " : "; cin >> cena_warzyw;

        tablica.push_back(lista_zakopow(nabial, pieczywo, warzywa, cena_nabialu, cena_pieczywa, cena_warzyw));
    }

    for (size_t i = 0; i < tablica.size(); i++)
    {
        cout << "Zakupy " << i + 1 << endl << tablica[i].nabial << " = " << tablica[i].cena_nabialu << endl << tablica[i].pieczywo << " = " << tablica[i].cena_pieczywa << endl << tablica[i].warzywa << " = " << tablica[i].cena_warzyw;
        suma = suma + tablica[i].cena_nabialu + tablica[i].cena_pieczywa + tablica[i].cena_warzyw;
    }

    cout << "Suma zakopow = " << suma;

    return EXIT_SUCCESS;
}