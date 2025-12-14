#include "Grocery.hpp"

Grocery::Grocery() {}

// getter for frequency. Returns the frequency of the item from the file
Grocery::GetFrequency(string id) {
    if (frequencyMap.find(id) != frequencyMap.end()) {
        return frequencyMap[id];
    } else {
        return 0;
    }
}

// getter for id. Returns the id of the item from the file
Grocery::GetId(string id) {
    if (frequencyMap.find(id) != frequencyMap.end()) {
        return id;
    } else {
        return "";
    }
}

Grocery::SetId(string id) {
    if (frequencyMap.find(id) != frequencyMap.end()) {
        frequencyMap[id] = id;
    } else {
        frequencyMap[id] = id;
    }
}

Grocery::SetFrequency(string id, int frequency) {
    if (frequencyMap.find(id) != frequencyMap.end()) {
        frequencyMap[id] = frequency;
    } else {
        frequencyMap[id] = frequency;
    }
}

Grocery::LoadData(std::string filename) {
    std::ifstream file(filename);

    if (file.is_open()) {
        // read file line by line, assign item name to id and frequency to frequency.
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
}

Grocery::saveData(std::string filename) {
    std::ofstream file(filename);

    if (file.is_open()) {
        // write frequency.dat to file
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
}
