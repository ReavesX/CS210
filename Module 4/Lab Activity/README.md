# 6.17 LAB*: Program: Online Shopping Cart (Part 1)

## Files to Create
You must submit **three files**:

1. `ItemToPurchase.h` — Class declaration  
2. `ItemToPurchase.cpp` — Class definition  
3. `main.cpp` — `main()` function

---

## ItemToPurchase Class Requirements

### Constructor
- Default constructor

### Public Member Functions
Mutators and accessors:

- `SetName()` and `GetName()`  
- `SetPrice()` and `GetPrice()`  
- `SetQuantity()` and `GetQuantity()`

### Private Data Members
All initialized in the default constructor:

- `string itemName` — initialized to `"none"`
- `int itemPrice` — initialized to `0`
- `int itemQuantity` — initialized to `0`

---

## main() Requirements

### (1) Prompt for Two Items
- Ask the user for **two items**.
- Create **two ItemToPurchase objects**.

### (2) In main(), prompt the user for two items and create two objects of the ItemToPurchase class. Before prompting for the second item, call `cin.ignore()` to allow proper string input.

**Example Input:**
```c++
Item 1
Enter the item name:
Chocolate Chips
Enter the item price:
3
Enter the item quantity:
1

Item 2
Enter the item name:
Bottled Water
Enter the item price:
1
Enter the item quantity:
10
```

### (3) Add the costs of the two items together and output the total cost.

**Example Output:**

```c++
TOTAL COST
Chocolate Chips 1 @ $3 = $3
Bottled Water 10 @ $1 = $10

Total: $13
```