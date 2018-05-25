#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    cout << (1 << n) - n - 1;

    return 0;
}
