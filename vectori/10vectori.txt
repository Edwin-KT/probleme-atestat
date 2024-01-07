#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("aparitii.out");

/*
Se citeşte de la tastatură un număr natural n şi elementele unui tablou unidimensional cu n elemente
numere întregi între 1 şi 10, apoi să se determine un tablou unidimensional, astfel încât pe fiecare
poziţie i să avem numărul de apariţii a numărului din tabloul iniţial. Rezultatul trebuie scris într-un
fişier aparitii.out.
Exemplu: Pentru n=9, v=(1, 5, 2, 1, 5, 7, 2, 1, 5) se obţine w=(3, 3, 2, 3, 3, 1, 2, 3, 3).
*/

int a[11];

int main()
{
    int n, v[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        a[v[i]]++;
    }
    for (int i = 1; i <= n; i++)
        fout << a[v[i]] << " ";

    return 0;
}