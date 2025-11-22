#include <iomanip> //For setprecision
#include <iostream>
using namespace std;

int main() {
  float costPerGallon = 0;
  float gasMileage = 0;

  cin >> gasMileage;
  cin >> costPerGallon;

  float costPerTwentyMiles = (costPerGallon * 20) / gasMileage;
  float costPerSeventyFiveMiles = (costPerGallon * 75) / gasMileage;
  float costPerFiveHundredMiles = (costPerGallon * 500) / gasMileage;

  cout << fixed << setprecision(2) << costPerTwentyMiles << " ";
  cout << fixed << setprecision(2) << costPerSeventyFiveMiles << " ";
  cout << fixed << setprecision(2) << costPerFiveHundredMiles << endl;

  return 0;
}
