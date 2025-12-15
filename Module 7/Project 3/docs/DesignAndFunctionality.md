# Design and Functionality Documentation

## Code Design

The program is designed using Object-Oriented Programming (OOP) principles in C++. The core logic is encapsulated within the `Grocery` class to separate data handling from the main menu logic.

### Data Structures

A `std::map<string, int>` is used as the primary data structure for storing item frequencies.

- **Key:** The item name (String).
- **Value:** The frequency count (Integer).
- **Reasoning:** Maps provide efficient lookups (O(log n)) and automatically handle unique keys, making them ideal for counting occurrences of distinct strings from a file.

### Class Structure

The `Grocery` class contains:

- **Private Members:** The map structure to store the data.
- **Public Methods:**
  - `LoadData(string filename)`: Reads the input file and populates the map.
  - `SaveData()`: Writes the map data to `frequency.dat`.
  - `GetFrequency(string item)`: Returns the count for a specific item.
  - `GetFrequencyMap()`: Returns the entire map for display purposes.

The `Display` class handles user interaction:

- `PrintItemFrequency()`: Handles input/output for specific item queries.
- `PrintFrequencyList()`: Iterates through the map to print key-value pairs.
- `PrintHistogram()`: Iterates through the map and prints asterisks corresponding to the value.

## Functionality & Screenshots

### 1. Initialization and Backup

Upon starting, the program reads `CS210_Project_Three_Input_File.txt` and immediately creates `frequency.dat`. This ensures data is backed up before user interaction begins.

### 2. Menu Option One: Specific Item Frequency

The user is prompted to type an item name (e.g., "Spinach"). The program searches the map and returns the numeric count.

```text
    Potatoes

    4
```

### 3. Menu Option Two: Frequency List

This option iterates through the map and prints every key-value pair. This provides a clear, numerical summary of all purchases.

```text
    Potatoes 4
    Pumpkins 5
    Onions 3
```

### 4. Menu Option Three: Histogram

This option visualizes the data. It loops through the items, printing the name, followed by a loop that prints an asterisk (`*`) for every count in the frequency value.

```text
    Potatoes ****
    Pumpkins *****
    Onions ***
```

### 5. Input Validation

The program utilizes case-insensitive search to ensure that the user's input is not case-sensitive. It also handles invalid menu options and user input errors through a while loop with an if statement to check for valid input.

Below is an example of invalid input and the error message:

```text
    Oreo Cookies

    Please enter a valid option.
```
