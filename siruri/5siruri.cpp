#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

ifstream fin("sufix_prefix.txt");

bool eVocala(char ch)
{
    return strchr("aeiou", ch) != 0;
}

int main()
{
    char text1[51], text2[51];
    fin.getline(text1, 51);
    fin.getline(text2, 52);
    for (int i = 0; i <= strlen(text1) - 1; ++i)
    {
        for (int j = strlen(text1) - 1 - i; j <= strlen(text1) - 1; j++)
            cout << text1[j];
        cout << endl;
    }
    for (int i = 0; i <= strlen(text2) - 1; i++)
    {
        for (int j = 0; j <= strlen(text2) - 1 - i; j++)
            cout << text2[j];
        cout << endl;
    }
    return 0;
}