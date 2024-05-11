#include <iostream>
#include <string.h>
using namespace std;

bool eVocala(char ch)
{
    return strchr("aeiou", ch) != 0;
}
int v[100];
int main()
{
    char cuv[21], vocaleFolosite[7];
    int ind = 0;
    cin >> cuv;
    for (int i = 0; cuv[i]; ++i)
    {
        int ok = 1;
        for (int j = 0; vocaleFolosite[j]; ++j)
            if (cuv[i] == vocaleFolosite[j])
                ok = 0;
        if (eVocala(cuv[i]) and ok == 1)
        {
            vocaleFolosite[ind] = cuv[i];
            ind++;
            for (int j = 0; cuv[j]; ++j)
                if (cuv[j] != cuv[i])
                    cout << cuv[j];
        }
        cout << " ";
    }
    return 0;
}