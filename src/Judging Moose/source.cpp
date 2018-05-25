#include <iostream>

using namespace std;

int main() 
{
    int l = 0;
    int r = 0;
    int x;

    cin >> l >> r;

    if (l == 0 && r == 0)
    {
        cout << "Not a moose" << endl;
    }

    else if (l >= 0 && l <= 20 && r >= 0 && r <= 20)
    {
        if (l == r)
        {
            x = r + r;
            cout << "even" << " " << x << endl;
        }
        else if (l != r)
        {
            if (r > l)
            {
                x = r + r;
            }
            else if (l > r)
            {
                x = l + l;
            }
            cout << "odd" << " " << x << endl;
        }
        else if (l > 20 || r > 20)
        {
            return 0;
        }
    }

    system("pause");
    return 0;
}
