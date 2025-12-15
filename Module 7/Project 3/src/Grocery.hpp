#ifndef GROCERY_HPP
#define GROCERY_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <string>

class Grocery {
   public:
    /**
     * @brief Default constructor for the Grocery class.
     */
    Grocery();
    /**
     * @brief Loads item data from a specified file.
     *
     * Reads the file line by line and populates the frequency map.
     *
     * @param filename The path to the input file.
     */
    void LoadData(std::string filename);

    /**
     * @brief Creates a backup file of the frequency data.
     *
     * Writes the current state of the frequency map to "frequency.dat".
     */
    void SaveData();

    /**
     * @brief Retrieves the frequency of a specific item.
     *
     * Performs a case-insensitive search for the item in the frequency map.
     *
     * @param item The name of the item to search for.
     * @return int The frequency of the item, or 0 if not found.
     */
    int GetFrequency(std::string item);

    /**
     * @brief Retrieves the entire frequency map.
     *
     * @return std::map<std::string, int> A map containing item names and their frequencies.
     */
    std::map<std::string, int> GetFrequencyMap();

   private:
    std::map<std::string, int> frequencyMap;
};

#endif  // GROCERY_HPP