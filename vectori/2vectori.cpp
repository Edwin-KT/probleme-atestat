#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

/*
Fişierul text numere.txt conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program care citeşte numerele din
fişierul numere.txt şi afişează pe ecran, separate prin câte un spaţiu, în ordine crescătoare, toate
numerele naturale nenule din fişier. Dacă nu există astfel de numere se va afişa pe ecran mesajul NU
EXISTA.
*/

int main()
{
    int nr, v[101], ind = 0;
    while (fin >> nr)
    {
        if (nr > 0)
            v[++ind] = nr;
    }
    if (ind == 0)
        cout << "NU EXISTA";
    else
    {
        for (int i = 1; i < ind; ++i)
            for (int j = i + 1; j <= ind; ++j)
            {
                if (v[i] > v[j])
                {
                    int aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        for (int i = 1; i <= ind; ++i)
            cout << v[i] << " ";
    }

    return 0;
}