#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
float costPerGallon = 0;
float gasMileage = 0;

cin >> gasMileage;
cin >> costPerGallon;

float costPerTwentyMiles = (costPerGallon * 20) / gasMileage;
float costPerSeventyFiveMiles = (costPerGallon * 75) / gasMileage;
float costPerFiveHundredMiles = (costPerGallon * 500) / gasMileage;

   return 0;
}
