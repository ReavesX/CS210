#include "Grocery.hpp"

void Grocery::LoadData(std::string filename) {
    std::ifstream file(filename);

    if (file.is_open()) {
        while (file >> tempItem) {
            frequencyMap[tempItem]++;
        }
    }

    file.close();
}

void Grocery::SaveData() {
    std::ofstream file("frequency.dat");

    if (file.is_open()) {
        for (const auto& pair : frequencyMap) {
            file << pair.first << " " << pair.second << "\n";
        }
    }

    file.close();
}

int Grocery::GetFrequency(std::string item) {
    if (frequencyMap.count(item)) return frequencyMap[item];
    return 0;
}

std::map<std::string, int> Grocery::GetFrequencyMap() { return frequencyMap; }
