#include "Grocery.hpp"

#include <algorithm>
#include <cctype>

Grocery::Grocery() {
    // Default constructor
}

void Grocery::LoadData(std::string filename) {
    std::ifstream file(filename);
    std::string tempItem;

    // check if file is open
    if (file.is_open()) {
        std::cout << "Successfully opened file: " << filename << std::endl;
        // read file line by line, incrementing the frequency of each item
        while (file >> tempItem) {
            frequencyMap[tempItem]++;
        }
    } else {
        std::cout << "Error: Could not open file: " << filename << std::endl;
    }

    file.close();  // close the file
}

void Grocery::SaveData() {
    std::ofstream file("frequency.dat");

    if (file.is_open()) {  // open file

        // write frequency map to file line by line
        for (const auto& pair : frequencyMap) {
            file << pair.first << " " << pair.second << "\n";
        }
    }

    file.close();  // close the file
}

int Grocery::GetFrequency(std::string item) {
    // Convert input item to lowercase for comparison
    std::string itemLower = item;
    std::transform(itemLower.begin(), itemLower.end(), itemLower.begin(),
                   ::tolower);  // convert item to lowercase

    // Iterate through the map to find a case-insensitive match (i.e "GarLiC" == "garlic" ==
    // "GARLIC")
    for (const auto& pair : frequencyMap) {
        std::string keyLower = pair.first;  // get the key
        std::transform(keyLower.begin(), keyLower.end(), keyLower.begin(),
                       ::tolower);  // convert key to lowercase

        if (keyLower == itemLower) {
            return pair.second;  // return the frequency
        }
    }
    return 0;  // return 0 if not found
}

std::map<std::string, int> Grocery::GetFrequencyMap() {
    return frequencyMap;
}  // return the frequency map
