#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.hpp"

int main() {

  ItemToPurchase item1;
  ItemToPurchase item2;

  string item1Name;
  int item1Price;
  int item1Quantity;

  string item2Name;
  int item2Price;
  int item2Quantity;

  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin, item1Name);
  item1.SetName(item1Name);
  cout << "Enter the item price:" << endl;
  cin >> item1Price;
  item1.SetPrice(item1Price);
  cout << "Enter the item quantity:" << endl;
  cin >> item1Quantity;
  item1.SetQuantity(item1Quantity);

  cin.ignore();
  cout << endl;

  cout << "Item 2" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin, item2Name);
  item2.SetName(item2Name);
  cout << "Enter the item price:" << endl;
  cin >> item2Price;
  item2.SetPrice(item2Price);
  cout << "Enter the item quantity:" << endl;
  cin >> item2Quantity;
  item2.SetQuantity(item2Quantity);

  int item1CumulativeCost;
  int item2CumulativeCost;

  item1CumulativeCost = item1.GetPrice() * item1.GetQuantity();
  item2CumulativeCost = item2.GetPrice() * item2.GetQuantity();

  cout << endl;
  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $"
       << item1.GetPrice() << " = $" << item1CumulativeCost << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $"
       << item2.GetPrice() << " = $" << item2CumulativeCost << endl;
  cout << endl;
  cout << "Total: $" << item1CumulativeCost + item2CumulativeCost << endl;

  return 0;
}