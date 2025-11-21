#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantity; 
    string item;
    
    while (cin >> item && item != "quit"){
        cin >> quantity;
        cout << "Eating " << quantity << " " << item << " a day keeps you happy and healthy." << endl;
    }
   
   return 0;
}
