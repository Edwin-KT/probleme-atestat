#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("text.in");

bool eVocala(char ch)
{
    return strchr("aeiouAEIOU", ch) != 0;
}

int main()
{
    int n, cnt = 0;
    fin >> n;
    for (int i = 1; i <= n; ++i)
    {
        char cuv[51];
        fin >> cuv;
        if (eVocala(cuv[0]) and eVocala(cuv[strlen(cuv) - 1]))
            cnt++;
    }
    cout << cnt;
    return 0;
}