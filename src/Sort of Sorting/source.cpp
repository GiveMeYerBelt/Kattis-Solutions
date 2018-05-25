#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareFirstTwoLetters(string s1, string s2)
{
    if ( (s1[0]) > (s2[0]))
    {
        return false;
    }
    else if ((s1[0]) < (s2[0]))
    {
        return true;
    }
    if ((s1[1]) > (s2[1]))
    {
        return false;
    }
    else if ((s1[1]) < (s2[1]))
    {
        return true;
    }
    return false;
}

int main()
{
    vector<string> names;
    int numNames;
    cin >> numNames;

    while (numNames != 0)
    {
        string temp;
        // take in the names for the test case
        for (int i = 0; i < numNames; ++i)
        {
            cin >> temp;
            names.push_back(temp);
        }

        //sort
        stable_sort(names.begin(), names.end(), compareFirstTwoLetters);

        //output
        for (int i = 0; i < names.size(); ++i)
        {
            cout << names[i] << endl;
        }
        cout << endl;

        //clean for next run
        names.clear();
        cin >> numNames;
    }

    return 0;
}
