#include <iostream>

using namespace std;

int sumOfDigits(int num)
{
  int sum = 0;

  while(num != 0)
  {
    sum += num %10;
    num /=10;
  }

  return sum;
}


int main ()
{
  int num;
  cin >> num;

  while (num != 0)
  {
    int sumofNumDigits = sumOfDigits(num);
    int n = 11;

    while(sumOfDigits(n*num) != sumofNumDigits)
    {
      ++n;
    }

    cout << n << endl;
    cin >> num;
  }

  return 0;
}
