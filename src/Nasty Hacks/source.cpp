#include <iostream>

using namespace std;

int main()
{
    int n, r, e, c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> r >> e >> c;
        if (r >= -10 ^ 6 && e <= 10 ^ 6 && c >= 0 && c <= 10 ^ 6)
        {
            if (r + c < e)
            {
                cout << "advertise" << endl;
            }
            else if (r + c == e)
            {
                cout << "does not matter" << endl;
            }
            else 
            {
                cout << "do not advertise" << endl;
            }
        }
        else
        {

        }
    }

    system("pause");
    return 0;
}
