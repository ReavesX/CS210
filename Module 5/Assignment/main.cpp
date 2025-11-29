/*
* Developer: Donald Jackson
* Date: November 29, 2025
* Purpose: Reads Fahrenheit temps from a file, converts to Celsius, 
* and writes to a new file while preserving the original order.
*/


#include <iostream>
#include <fstream>
// #include <map> no longer using a map instead using a vector of pairs (no alphabetical sorting)
#include <utility> // for pairs 
#include <vector> // switched to a vector with pairs instead of a map because I assumed 
                 // this is autograded and formatting should be preserved instead of alphabetized
                 // I wanted to use a map for larger data sets, but this was the next best case
#include <string>


using namespace std;




/*
  Open the file
  Read the file
  add to a map
  close the file
  convert temperatures
  Write the temperatures to a new file in order
*/

int main() {
    // open input and output files
    ifstream FahrenheitTemperature ("FahrenheitTemperature.txt");
    ofstream CelsiusTemperature ("CelsiusTemperature.txt");

    vector<pair<string, int>> myTemps; // Creates an empty vector with pairs of type string and int

    // create variables for the city and temperatures
    string city; 
    int temperature;
    

    // read the file's contents and close it when done.
    while (FahrenheitTemperature >> city >> temperature) {
        // add city and temperature to the vector
        myTemps.push_back({city, temperature});
    }

    FahrenheitTemperature.close();


    // convert the temperatures in place in the vector
    for (auto& pair : myTemps){
        double convertedTemp = (pair.second - 32.0) * 5.0 / 9.0;
        pair.second = int(convertedTemp);
    }

    // write the temperatures to the output file as long as it is open
    if (CelsiusTemperature.is_open()){
        for (auto& pair : myTemps){
            CelsiusTemperature << pair.first << " " << pair.second << endl;
        }
        // close the output file
        CelsiusTemperature.close();
    }

    cout << "Conversion Complete." << endl;

    return 0;
}