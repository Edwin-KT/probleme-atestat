#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

bool eVocala(char ch)
{
    return strchr("AEIOUaeiou", ch) != 0;
}

int main()
{
    char text[105], text2[1000];
    int ind = 0;
    cin.getline(text, 101);
    for (int i = 0; text[i]; i++)
    {
        text2[ind] = text[i];
        ind++;
        if (eVocala(text[i]))
            for (int j = 1; j < i; ++j)
            {
                text2[ind] = text[i];
                ind++;
            }
    }
    cout << text2;
    return 0;
}