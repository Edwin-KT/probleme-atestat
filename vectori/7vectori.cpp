#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cifre.txt");

/*
Fişierul text cifre.txt conţine pe prima linie un număr natural n (0<n<1000), iar pe a doua linie n
numere naturale cu cel mult 9 cifre fiecare. Scrieţi un program care citeşte toate numerele din fişier şi
afişează pe ecran, separate prin câte un spaţiu, numerele formate doar din cifre distincte şi care au
exact trei cifre.
Exemplu: dacă fişierul cifre.txt are următorul conţinut:
7
249 511 4329 2 4313 243 3562
atunci pe ecran se vor afişa numerele 249 243
*/

int main()
{
    int n, nr;
    fin >> n;
    for (int i = 1; i <= n; ++i)
    {
        fin >> nr;
        if (nr >= 100 and nr <= 900)
            if (nr % 10 != (nr / 10) % 10 and (nr / 10) % 10 != (nr / 100) % 10 and nr % 10 != (nr / 100) % 10)
                cout << nr << " ";
    }

    return 0;
}