#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string input = " ";
    cin >> input;
    int lineSize = input.size();
    double upper = 0;
    double lower = 0;
    double white = 0;
    double sym = 0;

    for (int i = 0; i < lineSize; ++i)
    {
        int ascCh = input[i];

        if (ascCh >= 65 && ascCh <= 90)
        {
            ++upper;
        }
        else if (ascCh >= 97 && ascCh <= 122)
        {
            ++lower;
        }
        else if (ascCh == 95)
        {
            ++white;
        }
        else
        {
            ++sym;
        }
    }
    cout << fixed << showpoint << setprecision(16) << white / lineSize << endl << lower / lineSize << endl << upper / lineSize << endl << sym / lineSize << endl;
    return 0;
}
