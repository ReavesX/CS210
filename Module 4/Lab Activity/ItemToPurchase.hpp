#ifndef ITEM_TO_PURCHASE_HPP
#define ITEM_TO_PURCHASE_HPP

#include <string>
using namespace std;

class ItemToPurchase {
    public:
        // constructor
        ItemToPurchase();    

        
    // public setter and getter functions
        void SetName(string itemName);
        void SetPrice(int itemPrice);
        void SetQuantity(int itemQuantity);


        
        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;

    private:
        // private data members
        string itemName;
        int itemPrice;
        int itemQuantity;
};

#endif  // ITEM_TO_PURCHASE_HPP