#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cuvinte.txt");

bool eVocala(char ch)
{
    return (strchr("aeiouAEIOU", ch) != 0);
}

int v[21];
int main()
{
    char cuv[21], c[21][21];
    int ind = 1;
    while (fin >> cuv)
    {
        for (int i = 0; cuv[i]; i++)
        {
            c[ind][i] = cuv[i];
            if (eVocala(cuv[i]))
                v[ind]++;
        }
        ind++;
    }
    for (int i = 1; i < ind; ++i)
    {
        for (int j = i + 1; j <= ind; ++j)
        {
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                char cuvaux[21];
                strcpy(cuvaux, c[i]);
                strcpy(c[i], c[j]);
                strcpy(c[j], cuvaux);
            }
        }
    }
    for (int i = 1; i <= ind; ++i)
    {
        cout << c[i] << endl;
    }
    return 0;
}
