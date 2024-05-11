#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ofstream fout("sir.out");

bool eNumar(char ch)
{
    return strchr("0123456789", ch) != 0;
}

int main()
{
    char s[600], s2[600];
    int ind = 0;
    cin.getline(s, 256);
    for (int i = 0; s[i]; ++i)
    {
        if (eNumar(s[i]))
        {
            for (int j = 1; j <= s[i] - '0'; ++j)
            {
                s2[ind] = s[i + 1];
                ind++;
            }
        }
    }
    s[ind] = '\0';
    strcpy(s, s2);
    fout << s;
    return 0;
}