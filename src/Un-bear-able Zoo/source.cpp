#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int animals;
    cin >> animals;
    int test = 1;
    while (animals != 0)
    {
        cin >> ws;
        map<string, int> countOfAnimals;
        string animal;
        char next = cin.peek();

        for (int i = 0; i < animals; ++i)
        {
            while (next != '\n')
            {
                cin >> animal;
                for (int k = 0; k < animal.size(); ++k)
                    animal[k] = tolower(animal[k]);

                    next = cin.peek();
                
            }
            if (countOfAnimals.find(animal) == countOfAnimals.end())
            {
                countOfAnimals.insert(pair<string, int>(animal, 1));
            }
            else {
                ++countOfAnimals[animal];
            }
            next = ' ';
        }
        cout << "List " << test << ":" << endl;
        for (auto it = countOfAnimals.begin(); it != countOfAnimals.end(); ++it)
        {
            cout << it->first << " | " << it->second << endl;
        }
        cin >> animals;
        ++test;
    }


    return 0;
}
