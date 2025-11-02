/*
* Developer: Don Jackson
* Date: November 2, 2025
* Purpose: This application prints "Hello, World!" to the console.
*/

#include <iostream>  // So that we can use input and output.
using namespace std; // Using the standard namespace to avoid prefixing std::


int main() {
    string wait_to_close; // Variable to hold user input before closing program.
    cout << "Hello, World!" << endl; // print Hello, World! to the console.
    
    cout << "Input any text followed by \'Enter\' to exit: "; // Prompt user to enter to exit the program.
    cin >> wait_to_close; // This allows for "Hello, World!"" to be seen before program closes. 
}