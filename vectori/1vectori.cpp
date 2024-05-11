#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("matrice.txt");

/*
De la tastatură se citesc 2 numere a și b, (a<b), de maxim 9 cifre fiecare. Să se scrie în fișierul
fibo.txt toate numerele din șirul lui Fibonacci care sunt în intervalul [a,b].
*/

int main()
{
    int a, b, f1 = 1, f2 = 1, f3 = 0;
    cin >> a >> b;
    if (a == 1)
        fout << f1 << " " << f2 << " ";
    while (f3 <= b)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        if (f3 >= a and f3 <= b)
            fout << f3 << " ";
    }

    return 0;
}