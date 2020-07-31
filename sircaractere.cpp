#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sirCaractere;
    int lowerCase = 0, upperCase = 0, digit = 0;
    getline(cin, sirCaractere);
    for (int i = 0; i < sirCaractere.length(); i++)
    {
        if (isupper(sirCaractere[i]))
            upperCase++;
        else if (islower(sirCaractere[i]))
            lowerCase++;
        else if (isdigit(sirCaractere[i]))
            digit++;
    }
    cout << lowerCase << endl
         << upperCase << endl
         << digit;
    return 0;
}