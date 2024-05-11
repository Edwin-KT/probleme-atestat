#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("in.txt");

bool eVocala(char ch)
{
    return strchr("AEIOUaeiou", ch) != 0;
}

int main()
{
    char text[205], text2[205];
    int ind = 0;
    fin.get(text, 201);
    for (int i = 0; text[i]; ++i)
    {
        text2[ind] = text[i];
        ind++;
        if (eVocala(text[i]))
        {
            text2[ind] = 'p';
            ind++;
            text2[ind] = text[i];
            ind++;
        }
    }
    strcpy(text, text2);
    cout << text;
    return 0;
}