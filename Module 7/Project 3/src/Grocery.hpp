#ifndef GROCERY_HPP
#define GROCERY_HPP

#include <iostream>
#include <map>
#include <string>

class Grocery {
   public:
    Grocery();  // default constructor

    // setter for id. Sets the id of the item
    void SetId(std::string id);

    // setter for frequency. Sets the frequency of the item
    void SetFrequency(int frequency);

    // getter for id. Returns the id of the item
    std::string GetId();

    // getter for frequency. Returns the frequency of the item
    int GetFrequency();

    // map frequency. Maps the frequency to the item
    void MapFrequency(std::map<std::string, int> frequencyMap);

    // frequency. Returns the frequency of the item
    std::map<std::string, int> frequency();

   private:
    std::string id;
    int frequency;

    std::map<std::string, int> frequencyMap;
};

#endif  // GROCERY_HPP