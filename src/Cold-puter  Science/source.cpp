#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int temp = 0;

    int count = 0;


    for (int i = 0; i < n; ++i)

    {
        cin >> temp;

        if (temp < 0)
        {
            ++count;

        }
    }

    cout << count;


    return 0;
}
