#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

ofstream fout("litere.txt");

int main()
{
    char s[260];
    char *cuv;
    cin.getline(s, 256);
    for (int i = 0; s[i]; ++i)
    {
        if (s[i] != ' ')
        {
            if (i == 0 or i == strlen(s) - 1 or s[i - 1] == ' ' or s[i + 1] == ' ')
                s[i] -= 32;
        }
    }
    fout << s;
    return 0;
}
