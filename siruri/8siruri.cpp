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
        int cntVocale = 0, cntConsoane = 0;
        for (int j = 0; cuv[j]; ++j)
        {
            if (eVocala(cuv[j]))
                cntVocale++;
            else
                cntConsoane++;
        }
        if (cntVocale == cntConsoane)
            cnt++;
    }
    cout << cnt;
    return 0;
}