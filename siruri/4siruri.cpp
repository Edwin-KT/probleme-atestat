#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

ofstream fout("vocale.txt");

bool eVocala(char ch)
{
    return strchr("aeiou", ch) != 0;
}

int main()
{
    char text[256];
    cin.get(text, 250);
    for (int i = 0; text[i]; ++i)
    {
        if (eVocala(text[i]))
        {
            strcpy(text + i + 2, text + i + 1);
            text[i + 1] = text[i] - 32;
        }
    }
    fout << text;
    return 0;
}