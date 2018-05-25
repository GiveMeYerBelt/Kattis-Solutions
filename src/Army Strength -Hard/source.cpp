#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main ()
{
  int testCases;
  cin >> testCases;

  for(int test = 0; test < testCases; ++test)
  {
    int mechArmySize, godArmySize;
    cin >> godArmySize  >> mechArmySize ;

    list<int> godArmy;
    list<int> mechArmy;

    int temp;
    for(int i = 0; i < godArmySize; ++i)
    {
      cin >> temp;
      godArmy.push_back(temp);
    }

    for(int i = 0; i < mechArmySize; ++i)
    {
      cin >> temp;
      mechArmy.push_back(temp);
    }

    godArmy.sort();
    mechArmy.sort();

    list<int>::iterator god = godArmy.begin();
    list<int>::iterator mech = mechArmy.begin();
    while (god != godArmy.end() && mech != mechArmy.end())
    {
      if(*god < *mech) {
        ++god;
      } else if (*mech < *god) {
        ++mech;
      } else {
        ++mech;
      }
    }

    if(god == godArmy.end()) {
      cout << "MechaGodzilla" << endl;
    } else if(mech == mechArmy.end()) {
      cout << "Godzilla" << endl;
    } else {
      cout << "uncertain" << endl;
    }
  }

  return 0;
}
