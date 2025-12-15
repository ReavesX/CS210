#ifndef GROCERY_HPP
#define GROCERY_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <string>

class Grocery {
   public:
    Grocery();
    void LoadData(std::string filename);

    void SaveData();

    int GetFrequency(std::string item);

    std::map<std::string, int> GetFrequencyMap();

   private:
    std::map<std::string, int> frequencyMap;
    std::string item;
    int frequency;
};