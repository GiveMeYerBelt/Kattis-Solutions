#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int N = 0;
  int b = 0; //beats
  float p = 0; //seconds


  float BPM = 0;
  float Min = 0;
  float Max = 0;

  cin >> N;

  for (int i = 0; i < N; ++i){
    cin >> b >> p;

     Min = (60/(p/(b-1)));
     Max = (60/(p/(b+1)));
     BPM = ((60 * b)/p);

     cout << setprecision(4) << fixed << Min << " " << BPM << " " << Max << endl;
  }
  return 0;
}
