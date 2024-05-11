#include <iostream>
using namespace std;

/*
Se citeşte de la tastatură un număr natural n (n>=100). Să se determine dacă numărul dat este număr
„munte-vale”. Un număr natural este „munte-vale” dacă cifrele din număr sunt în ordine crescătoare
până la o anumită poziţie, iar cifrele care urmează sunt în ordine descrescătoare până la sfârşit.
Exemple pentru numere „munte-vale”: 24521, 18942, 16432.
*/

int main()
{
    int n, x;
    cin >> n;
    x = n % 10;
    n /= 10;
    while (x <= n % 10)
    {
        x = n % 10;
        n /= 10;
    }
    while (x >= n % 10 and n != 0)
    {
        x = n % 10;
        n /= 10;
    }
    if (n > 0)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}