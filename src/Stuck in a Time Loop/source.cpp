#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num >= 1 && num <= 100)
    {
        for (int i = 1; i <= num; ++i)
        {
            cout << i << " " << "Abracadabra\n";
        }
    }
    return 0;
}
