#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("interval.txt");

/*
Fişierul text interval.txt conţine pe prima linie un număr natural nenul n (1≤n≤1000), iar pe fiecare
dintre următoarele n linii câte două numere întregi a şi b (1≤a≤b≤32000), fiecare pereche
reprezentând un interval închis de forma [a,b]. Scrieţi un program care citeşte numerele din fişier şi
determină un interval dintre cele citite care conţine cel mai mare număr de numere întregi şi afişează
pe o linie a ecranului, separate printr-un spaţiu, numerele care reprezintă capetele intervalului
determinat. În cazul în care sunt mai multe intervale care îndeplinesc această proprietate, se vor afişa
informaţiile referitoare la acel interval la care numărul care reprezintă capătul din dreapta este
minim.
Exemplu:
4
17 24
-2 3
9 15
8 15
Se va afișa 8 15. [8,15] și [17,24] au același număr de elemente întregi, dar 8 e mai mic
*/

int main()
{
    int n, a, b, max, nr1, nr2;
    fin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int nr;
        fin >> a >> b;
        if (a < 0 and b < 0)
            nr = abs(b + a);
        else
            nr = b - a;
        if (i == 1)
        {
            max = nr;
            nr1 = a;
            nr2 = b;
        }
        else if ((nr >= max) and b < nr2)
        {
            max = nr;
            nr1 = a;
            nr2 = b;
        }
    }
    cout << nr1 << " " << nr2;
    return 0;
}