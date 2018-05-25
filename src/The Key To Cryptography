#include <iostream>
#include <string>

using namespace std;

const int shift = 65;

int main()
{
    string cypher;
    string message;

    cin >> cypher >> message;

    for (int i = 0; i < cypher.size(); ++i)
    {
        int ch = (static_cast<int>(cypher[i])- shift)- (static_cast<int>(message[i]) - shift);

        if (ch < 0){
            ch = 26 + ch;
        }
        cout << static_cast<char> (ch + shift);
        message += static_cast<char>(ch + shift);
    }
    return 0;
}
