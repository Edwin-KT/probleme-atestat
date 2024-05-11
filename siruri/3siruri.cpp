#include <iostream>
using namespace std;

int main()
{
    char c1, c2, s[256];
    cin >> c1 >> c2;
    cin.get(s, 252);
    for (int i = 0; s[i]; ++i)
    {
        if (s[i] == c1)
            s[i] = c2;
        else if (s[i] == c2)
            s[i] = c1;
    }
    cout << s;
    return 0;
}